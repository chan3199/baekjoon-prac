#include <iostream>

using namespace std;

int main() {

    int arr[101][101];

    int N;

    cin >> N;

    int result = 0;

    for (int i = 0; i < N; i++) {
        int x,y;
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (arr[j][k] == 1)
                    continue;
                arr[j][k] = 1;
                result++;
            }
        }
    }

    cout << result;

    return 0;
}