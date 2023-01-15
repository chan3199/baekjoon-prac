#include <iostream>

using namespace std;

int main() {

    int Max,R;
 
	int arr[8];	
 
	for(int i = 0; i <= 8; i++) {
		cin >> arr[i];
	}
    
    Max = arr[0];
    for (int k = 0; k <= 8; k++) {
        if (Max < arr[k]) {
            Max = arr[k];
        }
    }

    for (int i = 0; i <= 8; i++) {
        if (arr[i] == Max) {
            R = i+1;
        }
    }

    cout << Max << "\n" << R;

    return 0;
}