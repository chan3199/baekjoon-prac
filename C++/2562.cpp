#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int Max,R;
 
	int arr[8];	
 
	for(int i = 0; i <= 8; i++) {
		cin >> arr[i];
	}
    
    sort(arr,arr+8);

    Max = arr[8];

    for (int i = 0; i <= 8; i++) {
        if (arr[i] == Max) {
            R = i+1;
        }
    }

    cout << Max << "\n" << R;

    return 0;
}