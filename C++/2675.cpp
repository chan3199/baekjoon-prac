#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;

    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        string s;
        string result;
        cin >> n; 
        cin >> s;
        for (char a : s) {
            for (int j = 0; j < n; j++) {
                result += a;
            }
        }
        cout << result << "\n";
    }

    return 0;
}