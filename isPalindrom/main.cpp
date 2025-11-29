#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 3, 2, 1};
    int arrSize = sizeof(array) / sizeof(array[0]);
    bool isPalindrome = true;

    for(int index = 0; index < arrSize/2; index++){
        if(array[index] != array[arrSize - 1 - index]){
            isPalindrome = false;
            cout << "It isn't a palindrome" << endl;
            break;
        }
    }

    if(isPalindrome)
        cout << "It's a palindrome" << endl;

    return 0;
}
