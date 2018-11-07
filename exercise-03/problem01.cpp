#include <iostream>

using namespace std;

int main() {

    int n, m, k;

    cin >> n >> m >> k;

    int result = n / (k - m);

    if(n % (k - m) > 0) {
       result++;
    }

    cout << result << endl;

    return 0;
}
