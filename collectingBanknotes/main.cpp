#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;
    int banknotes[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    cout << "Hello, this program will find the minimal number of "
         << endl << "banknotes needed to deliver any amount of money to the client" << endl;

    while(1) {
        cout << endl << "Input amount: ";
        cin >> userInput;

        if(userInput <= 0){
            cout << "Incorrect input" << endl;
            continue;
        }

        cout << "Banknotes: ";

        for(int index = 0; index < 10; index++){
            while(userInput >= banknotes[index]){
                userInput -= banknotes[index];
                cout << banknotes[index] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
