#include <iostream>

using namespace std;

int main(void) {
    int userPowInput = 0;
    unsigned long Pow = 1;

    cout << "Input: ";
    cin >> userPowInput;

    if(userPowInput <= 0 || userPowInput > 63){return 0;}

    for(int counter = 1; counter <= userPowInput; counter++){
        Pow *= 2;
    }

    cout << "Result: " << Pow << endl;

    return 0;
}
