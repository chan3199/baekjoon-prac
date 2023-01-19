#include <iostream>

using namespace std;

int main() {
    int A,B,C;

    cin >> A >> B >> C;

    int total_price = 0;
    int cnt = 0;

    total_price = C-B;

    cnt = A/total_price + 1;

    if (C <= B) {
        cnt = -1;
    }

    cout << cnt;
}