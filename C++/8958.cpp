#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    string s;
    
    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> s;

        int p = 0;
        int t = 0;
        
        for (int j = 0; j < s.length(); j++) {

            if (s[j] == 'O') {
                p ++;
                t += p;    
            }
            else {
                p = 0;
            }
        }

        cout << t << "\n";
    }

    return 0;
}