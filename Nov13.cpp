#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, I am Charles !!! Welcome to my first C++ application" << "\n";
    while (true)
    string Name;
    cout << "Hey! What is your name: ";
    cin >> Name;
    cout <<"Good Day! "<< Name <<" It's nice to meet you!" << "\n";
    /*To get their birthday*/
    cout << "What is your Birthday? \n";
    int Month, Day, Year;
    cout << "Month: ";
    cin >> Month;
    cout << "Day: ";
    cin >> Day;
    cout << "Year: ";
    cin >> Year;
    /*To know if their birthday is leapyear or nah*/
    double LeapYear = Year % 4;
    cout << "The value of year: " << LeapYear <<"\n";
    if (LeapYear ==0)
    cout << "I am Leap Year \n";
    else
    cout << "Not a Leap Year \n";
    /*To know their zodiac sign*/
    if (Month ==12 && Day >=22 || Month ==1 && Day <=19){
        cout << "Your Zodiac sign is Capricornus";
    } else if (Month ==1 && Day >=20 || Month==2 && Day <=18){
        cout << "Your Zodiac sign is Aquarius";
    } else if (Month ==2 && Day >=19 || Month ==3 && Day <=20){
        cout << "Your Zodiac sign is Pisces";
    } else if (Month ==3 && Day >=21 || Month ==4 && Day <=19){
        cout << "Your Zodiac sign is Aries";
    } else if (Month ==4 && Day >=20 || Month ==5 && Day <=20){
        cout << "Your Zodiac sign is Taurus";
    } else if (Month ==5 && Day >=21 || Month ==6 && Day <=21){
        cout << "Your Zodiac sign is Gemini";
    } else if (Month ==6 && Day >=22 || Month ==7 && Day <=22){
        cout << "Your Zodiac sign is Cancer";
    } else if (Month ==7 && Day >=23 || Month ==8 && Day <=22){
        cout << "Your Zodiac sign is Leo";
    } else if (Month ==8 && Day >=23 || Month ==9 && Day <=22){
        cout << "Your Zodiac sign is Virgo";
    } else if (Month ==9 && Day >=23 || Month ==10 && Day <=23){
        cout << "Your Zodiac sign is Libra";
    } else if (Month ==10 && Day >=24 || Month ==11 && Day <=21){
        cout << "Your Zodiac sign is Scorpius";
    } else {Month ==11 && Day >=22 || Month ==12 && Day <=21;
        cout << "Your Zodiac sign is Sagittarius";
    }


    return 0;
}
