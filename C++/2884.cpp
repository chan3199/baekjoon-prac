#include <iostream>
using namespace std;

int main() {
	int A;
    int B;

    cin >> A;
    cin >> B;

    B -= 45;

    if ( B < 0 ) {
        B += 60;
        A -= 1;

        if ( A < 0 ) {
            A = 23;
        }   
    }

    cout << A << " " << B;

	return 0;
}