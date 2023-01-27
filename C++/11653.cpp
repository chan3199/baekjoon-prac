#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N;

    cin >> N;

    int i = 2;

    while ( N != 1) {
        if (N % i == 0) {
            cout << i << "\n";
            N = N/i;
        }
        else {
            i++;
        }
    }

    return 0;
}