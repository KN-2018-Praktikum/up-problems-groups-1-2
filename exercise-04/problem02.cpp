#include <iostream>

using namespace std;

int main() {

    int n;
    float sum = 0.0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int current;
        cin >> current;

        sum += current;
    }

    cout << sum / n << endl;

    return 0;
}
