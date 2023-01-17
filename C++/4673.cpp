#include <iostream>

using namespace std;

int number[10001] = {0,};

void selfnumber(int n) {
    int sn;
    if (n < 10) {
        sn = n+n;
    }
    else if (n < 100) {
        sn = n+(n/10)+(n%10);
    }
    else if (n < 1000) {
        sn = n+(n/100)+(n%100/10)+(n%100%10);
    }
    else if (n < 10000) {
        sn = n+(n/1000)+(n%1000/100)+(n%1000%100/10)+(n%1000%100%10);
    }
    number[sn] = 1;
}

int main() {
    for (int i = 1; i < 10001; i++) {
        selfnumber(i);
    }
    
    for (int i = 1; i < 10001; i++) {
        if (number[i] == 0) {
            cout << i << "\n";
        }
    }
}