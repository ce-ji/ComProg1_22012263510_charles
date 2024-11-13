#include <iostream>
using namespace std;

int main() {

    cout << "Hello, I am Charles !!! Welcome to my first C++ application" << "\n";
    string Name;
    cout << "Hey! What is your name: ";
    cin >> Name;
    cout <<"Good Day! "<< Name <<" It's nice to meet you!" << "\n";
    /*Birthday*/
    cout << "What is your Birthday? \n";
    int Month, Day, Year;
    cout << "Month: ";
    cin >> Month;
    cout << "Day: ";
    cin >> Day;
    cout << "Year: ";
    cin >> Year;
    
    double LeapYear = Year % 4;
    cout << "The value of year: " << LeapYear <<"\n";
    if (LeapYear == 0)
    cout << "I am Leap Year";
    else
    cout << "Not a Leap Year";

    return 0;
}