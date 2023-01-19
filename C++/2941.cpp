#include <iostream>
#include <string>

using namespace std;

string croatia[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

int main() {
    string s;
    cin >> s;

    int index;

    for (int i = 0; i < 8; i++) {
        while (1) {
            index = s.find(croatia[i]);
            if (index == string::npos) {
                break;
            }
            s.replace(index,croatia[i].length(),"@");
        }
    }
    int result = s.length();
    cout << result;

    return 0;
}