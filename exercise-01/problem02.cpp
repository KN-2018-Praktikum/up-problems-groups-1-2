#include <iostream>

using namespace std;

int main() {
    // Declaration on one line
     int firstNum, secondNum;

    // Declaration on two lines
    //int firstNum;
    //int secondNum;

    // Reading the numbers separated by space or new line
    cin >> firstNum >> secondNum;

    int result = firstNum + secondNum;

    // Printing the result number on the console
    cout << firstNum << " + " << secondNum << " = " << result;

    return 0;
}
