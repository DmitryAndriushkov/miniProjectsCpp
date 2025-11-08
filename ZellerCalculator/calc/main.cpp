#include <iostream>

using namespace std;

int main(){
    int year, mounth, day, result;
    bool leapYear;

    cout << "Hello, this is simple day of week finder program(0 for Sunday, 1 for Monday etc.)" << endl;
    cout << "This program finding a day using \"Zeller's congruence\" algorithm, " << endl;
    cout << "so you have to enter 3 values: " << endl
         << "1) Year between 1900-2025" << endl
         << "2) Mounth's between 1-12" << endl
         << "3) Day of mounth between 1 and It depends of mounth" << endl << endl;

    cout << "Enter year: ";
    cin >> year;
    if(year < 1900 || year > 2025){
        cout << "Incorrect year input, choose between 1900-2025" << endl;
        return 0;
    }

    cout << "Enter mounth: ";
    cin >> mounth;
    if(mounth <= 0 || mounth > 12){
        cout << "Incorrect mounth input" << endl;
        return 0;
    }

    cout << "Enter day: ";
    cin >> day;

    if((mounth == 4  ||
         mounth == 6  ||
         mounth == 9  ||
         mounth == 11)&&
        day >= 31){

        cout << "Theres no 31 days in that mounth" << endl;
        return 0;
    }
    else if(day > 31){
        cout << "Theres no more then 31 days in mounth" << endl;
        return 0;
    }
    if(mounth == 2){

        leapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
        if(!leapYear && day > 28){
            cout << "Error! " << year << " - not leap, theres 28 days in February" << endl;
            return 0;
        }
        else if(leapYear && day > 29){
            cout << "Error! Theres no more than 29 days in leap year" << endl;
            return 0;
        }
    }

    mounth -= 2;
    if(mounth <= 0){
        mounth += 12;
        year--;
    }

    result = (mounth * 83) / 32;
    result += day;
    result += year;
    result += year/4;
    result -= year/100;
    result += year/400;
    result %= 7;

    cout << "Your day is " << result << endl;

    return 0;
}
