#include <iostream>

using namespace std;

int main() {

    int arr[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int v,h = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max <= arr[i][j]) {
                max = arr[i][j];
                v = i+1;
                h = j+1;
            }
        }
    }

    cout << max << "\n";
    cout << v << " " << h;

    return 0;
}