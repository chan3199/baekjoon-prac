#include <iostream>

using namespace std;

int a[1000001];

int add(int N) {

    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        total += a[i];
    }
    return total;
}

int main() {
    int number;

    cin >> number;

    cout << add(number);
}
