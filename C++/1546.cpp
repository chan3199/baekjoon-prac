#include <iostream>
#include <algorithm>

using namespace std;

int n,m;

double t = 0;

int a[1001];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t += a[i];
    }

    sort(a,a+n);

    m = a[n-1];

    t = (t/m*100)/n;

    cout << fixed;
    cout.precision(6);
    cout << t;

    return 0;
}