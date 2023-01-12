#include <iostream>
using namespace std;

int main() {
	int N;

    cin >> N;

	if (100 >= N && N >= 90 ) {
		cout << "A";
	}
    else if (90 > N && N >= 80) {
        cout << "B";
    }
    else if (80 > N && N >= 70) {
        cout << "C";
    }
    else if (70 > N && 60) {
        cout << "D";
    }
    else {
        cout << "F";
    }

	return 0;
}