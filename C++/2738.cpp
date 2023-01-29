#include <iostream>

using namespace std;

int main() {

    int N,M;

    int arr_a[101][101];
    int arr_b[101][101];

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr_a[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr_b[i][j];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << arr_a[i][j] + arr_b[i][j] << " ";
        cout << '\n';
    }

    return 0;
}