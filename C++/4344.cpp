#include <iostream>
#include <cmath>

using namespace std;


int main() {

    int n;
    int a[1001];
    
    cin >> n;

    for (int i = 0; i < n; i++) {

        int s;

        cin >> s;

        int total = 0;
        int aver = 0;
        double n = 0;
        
        for (int j = 0; j < s; j++) {
            cin >> a[i];
            total += a[i];
        }

        aver = total/s;

        for (int q = 0; q < n; q++) {
            cout << a[q] << " ";
        }

        cout << aver << "\n";
        
        for (int k = 0; k < s; k++) {
            if (a[k] > aver) {
                n++;
            }
        }
        
        cout.precision(3);
        cout << n/s*100 << "%" <<"\n";
    }

    return 0;
}