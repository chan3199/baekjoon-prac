#include <iostream>
#include <algorithm>

using namespace std;

int a[9];

int n;
int c = 1;

int main() {
    
    for (int i = 0; i <= 9; i++)
    {
        cin >> n;
        a[i] = n%42;
    }

    sort(a,a+10);

    int temp = a[0];

    for (int i = 1; i <= 9; i++)
    {
        if (temp != a[i]) {
            c += 1;
        }
        temp = a[i];
    }
    cout << c;

    return 0;
}