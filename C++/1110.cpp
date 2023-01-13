#include <iostream>

using namespace std;

int main()
{
    int N,M,F,B,S,R,SN;

    cin >> N;

    M = N;
    R = 0;
    SN = 1;

    while (1)
    {
        F = M / 10;
        B = M % 10;
        S = F + B;
        R = B*10 + S%10;

        if (N == R) {
            break;
        }

        M = R;
        SN++;
        
    }

    cout << SN;

    return 0;
}