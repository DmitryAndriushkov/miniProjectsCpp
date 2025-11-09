#include <iostream>

using namespace std;

int main()
{
    short userYearInput = 0;

    int numA = 0;
    int numB = 0;
    int numC = 0;
    int numD = 0;
    int numE = 0;

    cout << "Hello, this program can calculate the exact date of the beginning of Easter using Gauss algorithm" << endl << endl;
    cout << "Please, enter year between XX-XXI cenury: ";
    cin >> userYearInput;

    if(userYearInput < 1900 || userYearInput > 2999){
        cout << endl << "Incorrect year input, choose between XX-XXI century" << endl;
        return 0;
    }

    numA = userYearInput % 19;
    numB = userYearInput % 4;
    numC = userYearInput % 7;

    numD = (numA * 19 + 24) % 30;

    numE = (2*numB + 4*numC + 6*numD + 5) % 7;

    if(numD + numE < 10){
        cout << endl << "Easter at March " << numD + numE + 22 << endl;
    }
    else{
        cout << endl << "Easter at April " << numD + numE - 9 << endl;
    }

    return 0;
}
