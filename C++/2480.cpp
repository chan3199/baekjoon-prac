#include <iostream>
using namespace std;

int main() {
	int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;

    if (A == B && B == C) {
        cout << 10000 + A * 1000;
    }
    else if (A == B || A == C) {
        cout << 1000 + A * 100;
    }
    else if (B == C) {
        cout << 1000 + B * 100;
    }
    else {
        cout << max(max(A,B),C)*100;
    }

	return 0;
}