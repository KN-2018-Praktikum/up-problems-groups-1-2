#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int numbersCnt = 0;

    for(int i = 0; i < n; i++) {
        int currentNumber;
        cin >> currentNumber;
        int dividersCnt = 0;

        for(int j = 2; j < currentNumber; j++) {
            if(currentNumber % j == 0) {
                dividersCnt++;
            }
        }

        if(dividersCnt == m) {
            numbersCnt++;
        }

    }

    cout << numbersCnt << endl;

    return 0;
}
