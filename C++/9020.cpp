#include <iostream>

using namespace std;

bool is_prime_number(int x) {
    if (x == 1) {
        return false;
    }
    if (x == 2) {
        return true;
    }
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {

    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int N = 0;
        cin >> N;

        for (int j = N/2; j >= 2; j--) {
            if (is_prime_number(j) && is_prime_number(N-j)) {
                cout << j << " " << N-j << "\n";
                break;
            }
            else {
                continue;
            }
        }
    }

    return 0;
}