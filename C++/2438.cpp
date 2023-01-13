#include <iostream>

using namespace std;

int main()
{
    int N;
    string s;
    s = "*";

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cout << s << "\n";
        s += "*";
    }

    return 0;
}