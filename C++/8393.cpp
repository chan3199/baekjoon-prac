#include <iostream>

using namespace std;

int main()
{
    int N;
    int R = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        R += i;
    }
    cout << R;

    return 0;
}