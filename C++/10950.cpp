#include <iostream>

using namespace std;

int main()
{
    int A,B,T;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> A;
        cin >> B;
        cout << A+B << "\n";
    }

    return 0;
}