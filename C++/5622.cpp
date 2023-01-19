#include <iostream>
#include <string>

using namespace std;

int compareString(string s) {

    int a[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int total = 0;
    for (int i = 0; i < s.length(); ++i) {
        int j = s[i]-65;
        total += a[j]+1;
    }
    return total;
}

int main() {

    string s;
    
    cin >> s;

    int result = compareString(s);

    cout << result << endl;
}