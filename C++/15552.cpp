#include <iostream>

using namespace std;

int main()
{
    int A,B,T;

    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.sync_with_stdio(false);
    cout.tie(NULL);
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> A;
        cin >> B;
        cout << A+B << "\n";
    }

    return 0;
}