#include <iostream>

using namespace std;

struct Time{
    int hours = 0;
    int minutes = 0;
};

int main()
{
    Time time;
    int duration = time.hours = time.minutes = -1;
    int durHours = 0;
    int durMinutes = 0;

    cout << "Current time" << endl;

    while(time.hours < 0 || time.hours > 23){
        cout << "Enter hours: ";
        cin >> time.hours;
        if (time.hours < 0 || time.hours > 23){
            cout << "Invalid hour format" << endl;
        }
    }

    while(time.minutes < 0 || time.minutes > 59){
        cout << "Enter minutes: ";
        cin >> time.minutes;
        if (time.minutes < 0 || time.minutes > 59){
            cout << "Invalid minutes format" << endl;
        }
    }

    while(duration < 0){
        cout << "Enter duration(min): ";
        cin >> duration;
        if (duration < 0){
            cout << "Invalid duration" << endl;
        }
    }

    durHours = duration / 60;
    durMinutes = duration % 60;

    time.hours += durHours;
    time.minutes += durMinutes;

    time.hours += time.minutes / 60; // add 1 hour if minutes > 59
    time.minutes %= 60; // actual minutes if minutes > 59
    time.hours %= 24; // same with hours

    cout << "New time: ";

    if (time.hours < 10){
        cout << 0;
    }
    cout << time.hours << ":";

    if (time.minutes < 10){
        cout << 0;
    }
    cout << time.minutes << endl;

    return 0;
}
