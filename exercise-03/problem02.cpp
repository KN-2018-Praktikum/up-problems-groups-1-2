#include <iostream>

using namespace std;

int main() {

    char firstLetter, secondLetter, firstNum, secondNum;
    char thirdNum, forthNum, thirdLetter, forthLetter;

    cin >> firstLetter >> secondLetter >> firstNum >> secondNum;
    cin >> thirdNum >> forthNum >> thirdLetter >> forthLetter;

    int multiplication = (firstNum - 48) * (secondNum - 48) * (thirdNum - 48) * (forthNum - 48);
    int sum = (firstLetter + secondLetter + thirdLetter + forthLetter) / 10;

    if(multiplication == sum) {
        cout << "Yes " << sum << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
