#include <iostream>

using namespace std;

int main()
{
    unsigned long long userNumInput = 0;
    int counter = 0;

    /*https://en.wikipedia.org/wiki/Collatz_conjecture*/
    cout << "Hello, today I took the Collatz conjecture as a basis and wrote a program using his algorithm" << endl;
    cout << "Final result will always be 1" << endl << endl;
    cout << "Please, enter non-negative and non-zero integer number: ";
    cin >> userNumInput;

    if(userNumInput <= 1){
        cout << "No iterations, wrong input or you entered 1" << endl;
    } else{
        do{
            if(userNumInput % 2 == 0){
                userNumInput /= 2;
            }
            else if(userNumInput % 2 != 0){
                userNumInput = 3 * userNumInput + 1;
            }
            else{
                continue;
            }
            counter++;
            cout << "Iteration #" << counter << " | Result: " << userNumInput << endl;
        }
        while(userNumInput != 1);
    }
    return 0;
}
