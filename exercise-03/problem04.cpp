#include <iostream>

using namespace std;

int main() {

    int k;

    cin >> k;

    unsigned long int first = 3;
    unsigned long int second = 4;
    unsigned long int third = 6;

    unsigned long int totalCount;


    for(int i = 0; i < k - 3; i++) {

        totalCount = first + third;

        first = second;
        second = third;
        third = totalCount;
    }

    cout << totalCount << endl;

    return 0;
}
