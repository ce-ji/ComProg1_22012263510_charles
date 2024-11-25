#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, I am Charles !!! Welcome to my first C++ application" << "\n";
    while (true){
    string Name;
    cout << "Hello! What is your name: ";
    cin >> Name;
    cout <<"Good Day! "<< Name <<" It's nice to meet you!" << "\n";
    cout << "May I know when is your birthday? [Yes/No]  \n";
    string bdaychoice;
    cin >> bdaychoice;
    if (bdaychoice == "Yes" || bdaychoice == "yes"){
            cout << "Enter birthday MM-DD-YYYY \n";
    } else{break; cout << "Thank You!" << Name;}
    int Month, Day, Year;
    cout << "Month: ";
    cin >> Month;
    cout << "Day: ";
    cin >> Day;
    cout << "Year: ";
    cin >> Year;
    //options
    int options;
    cout << "What do you want to do? \n[0]Stop\n[1]If you are LeapYear\n[2]What is your Zodiac Sign\n[3]What is your Chinese Zodiac\n[4]Enter new birthday\nOption: ";
    cin >> options;
    if (options == 0){
        break;
    } else if (options == 1){
        double LeapYear = Year % 4;
            if (Year % 100){
                if (Year % 400){
                    if (LeapYear == 0){
                        cout << "Your birthday is in the Leap Year \n";
                    }   else {cout << "Your birthday is not in the Leap Year \n";}
                }
            }
    } else if (options == 2){
    if (Month ==12 && Day >=22 || Month ==1 && Day <=19){
        cout << "Your Zodiac sign is Capricornus \n";
    } else if (Month ==1 && Day >=20 || Month==2 && Day <=18){
        cout << "Your Zodiac sign is Aquarius \n";
    } else if (Month ==2 && Day >=19 || Month ==3 && Day <=20){
        cout << "Your Zodiac sign is Pisces \n";
    } else if (Month ==3 && Day >=21 || Month ==4 && Day <=19){
        cout << "Your Zodiac sign is Aries \n";
    } else if (Month ==4 && Day >=20 || Month ==5 && Day <=20){
        cout << "Your Zodiac sign is Taurus \n";
    } else if (Month ==5 && Day >=21 || Month ==6 && Day <=21){
        cout << "Your Zodiac sign is Gemini \n";
    } else if (Month ==6 && Day >=22 || Month ==7 && Day <=22){
        cout << "Your Zodiac sign is Cancer \n";
    } else if (Month ==7 && Day >=23 || Month ==8 && Day <=22){
        cout << "Your Zodiac sign is Leo \n";
    } else if (Month ==8 && Day >=23 || Month ==9 && Day <=22){
        cout << "Your Zodiac sign is Virgo \n";
    } else if (Month ==9 && Day >=23 || Month ==10 && Day <=23){
        cout << "Your Zodiac sign is Libra \n";
    } else if (Month ==10 && Day >=24 || Month ==11 && Day <=21){
        cout << "Your Zodiac sign is Scorpius \n";
    } else {Month ==11 && Day >=22 || Month ==12 && Day <=21;
        cout << "Your Zodiac sign is Sagittarius \n";
    }
    } else if (options == 3){
            switch (Year % 12){
            case 0: cout << "Monkey \n"; break;
            case 1: cout << "Rooster \n"; break;
            case 2: cout << "Dog \n"; break;
            case 3: cout << "Pig \n"; break;
            case 4: cout << "Rat \n"; break;
            case 5: cout << "Ox \n"; break;
            case 6: cout << "Tiger \n"; break;
            case 7: cout << "Rabbit \n"; break;
            case 8: cout << "Dragon \n"; break;
            case 9: cout << "Snake \n"; break;
            case 10: cout << "Horse \n"; break;
            case 11: cout << "Goat \n"; break;
            default: cout << "Unknown \n";
        }
    }
    }
    return 0;
}
