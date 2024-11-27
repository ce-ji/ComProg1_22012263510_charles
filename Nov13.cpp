#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, I am Charles !!! Welcome to my first C++ application" << "\n";

    string Name;
    cout << "Hello! What is your name: ";
    cin >> Name;
    cout << "Good Day! " << Name << " It's nice to meet you!" << "\n";
    cout << "May I know when is your birthday? [Yes/No]  \n";

    string bdaychoice;
    cin >> bdaychoice;

    if (bdaychoice == "Yes" || bdaychoice == "yes") {
        cout << "Enter your birthday MM-DD-YYYY.\n";
    } else {
        cout << "Thank you, " << Name << "! Have a great day!\n";
        return 0;
    }

    bool continueProcessing = true;
    while (continueProcessing) {
        int Month, Day, Year;
        cout << "Month: ";
        cin >> Month;
        cout << "Day: ";
        cin >> Day;
        cout << "Year: ";
        cin >> Year;

        while (true) {
            int options;
            cout << "What do you want to do? \n"
                 << "[0] Stop\n"
                 << "[1] Check if it's a Leap Year\n"
                 << "[2] Find your Zodiac Sign\n"
                 << "[3] Find your Chinese Zodiac\n"
                 << "[4] Enter new birthday\n"
                 << "Option: ";
            cin >> options;

            if (options == 0) {
                cout << "Thank you for using the program. Goodbye!\n";
                return 0;
            } else if (options == 1) {
                if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
                    cout << "Your birthday is in a Leap Year.\n";
                } else {
                    cout << "Your birthday is not in a Leap Year.\n";
                }
            } else if (options == 2) {
                if (Month == 12 && Day >= 22 || Month == 1 && Day <= 19) {
                    cout << "Your Zodiac sign is Capricorn.\n";
                } else if (Month == 1 && Day >= 20 || Month == 2 && Day <= 18) {
                    cout << "Your Zodiac sign is Aquarius.\n";
                } else if (Month == 2 && Day >= 19 || Month == 3 && Day <= 20) {
                    cout << "Your Zodiac sign is Pisces.\n";
                } else if (Month == 3 && Day >= 21 || Month == 4 && Day <= 19) {
                    cout << "Your Zodiac sign is Aries.\n";
                } else if (Month == 4 && Day >= 20 || Month == 5 && Day <= 20) {
                    cout << "Your Zodiac sign is Taurus.\n";
                } else if (Month == 5 && Day >= 21 || Month == 6 && Day <= 21) {
                    cout << "Your Zodiac sign is Gemini.\n";
                } else if (Month == 6 && Day >= 22 || Month == 7 && Day <= 22) {
                    cout << "Your Zodiac sign is Cancer.\n";
                } else if (Month == 7 && Day >= 23 || Month == 8 && Day <= 22) {
                    cout << "Your Zodiac sign is Leo.\n";
                } else if (Month == 8 && Day >= 23 || Month == 9 && Day <= 22) {
                    cout << "Your Zodiac sign is Virgo.\n";
                } else if (Month == 9 && Day >= 23 || Month == 10 && Day <= 23) {
                    cout << "Your Zodiac sign is Libra.\n";
                } else if (Month == 10 && Day >= 24 || Month == 11 && Day <= 21) {
                    cout << "Your Zodiac sign is Scorpio.\n";
                } else {
                    cout << "Your Zodiac sign is Sagittarius.\n";
                }
            } else if (options == 3) {
                switch (Year % 12) {
                    case 0: cout << "Your Chinese Zodiac is Monkey.\n"; break;
                    case 1: cout << "Your Chinese Zodiac is Rooster.\n"; break;
                    case 2: cout << "Your Chinese Zodiac is Dog.\n"; break;
                    case 3: cout << "Your Chinese Zodiac is Pig.\n"; break;
                    case 4: cout << "Your Chinese Zodiac is Rat.\n"; break;
                    case 5: cout << "Your Chinese Zodiac is Ox.\n"; break;
                    case 6: cout << "Your Chinese Zodiac is Tiger.\n"; break;
                    case 7: cout << "Your Chinese Zodiac is Rabbit.\n"; break;
                    case 8: cout << "Your Chinese Zodiac is Dragon.\n"; break;
                    case 9: cout << "Your Chinese Zodiac is Snake.\n"; break;
                    case 10: cout << "Your Chinese Zodiac is Horse.\n"; break;
                    case 11: cout << "Your Chinese Zodiac is Goat.\n"; break;
                    default: cout << "Unknown Chinese Zodiac.\n";
                }
            } else if (options == 4) {
                break; // Break out of the inner loop to ask for a new birthday.
            } else {
                cout << "Invalid option. Please try again.\n";
            }
        }
    }

    return 0;
}
