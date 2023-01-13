#include <iostream>

using namespace std;

int main()
{
    int X,N,A,B;

    int R = 0;
    
    cin >> X;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> A;
        cin >> B;
        R += A * B;
    }

    if (X == R) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}