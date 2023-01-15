#include <iostream>

using namespace std;

int main() {
 
	int N;
    int Max,Min;
	cin >> N;
 
	int arr[1000001];	
 
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}
    
    Max = arr[0];
    Min = arr[0];
	for(int i = 1; i < N; i++) {
		if(arr[i] < Min) {
			Min = arr[i];
		}
        else if(arr[i] > Max) {
            Max = arr[i];
        }
	}
    cout << Min << " " << Max;

    return 0;
}