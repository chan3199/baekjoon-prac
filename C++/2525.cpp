#include <iostream>
using namespace std;

int main() {
	int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;

    B += C;

    while (1) {
        if ( B >= 60 ) {
            B -= 60;
            A += 1;

            if ( A > 23 ) {
                A = 0;
            }   
        }
        else {
            break;
        }
    }

    cout << A << " " << B;

	return 0;
}