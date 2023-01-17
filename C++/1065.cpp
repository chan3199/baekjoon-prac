#include <iostream>

using namespace std;


int hansu(int n) {

    int count = 0;

    int f,s,t = 0;

    if ( n < 100 ) {
        return n;
    }
    else {
        count = 99;

        for (int i = 100; i <= n; i++) {
            f = i/100;
            s = (i/10)%10;
            t = i%10;
            if ((f-s) == (s-t)) {
                count++;
            }
        }
    }

    return count;
}

int main() {

    int N;

    cin >> N;

    int result;

    result = hansu(N);

    cin.sync_with_stdio(false);
    cin.tie(0);
    cout << result;

    return 0;
}