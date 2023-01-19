#include <iostream>

using namespace std;

int reversenumber(int number) {
    int f = number/100;
    int s = number%100/10;
    int t = number%10;

    int result = t*100+s*10+f;
    return result;
}

int compare(int number1, int number2) {
    if (number1 < number2) {
        return number2;
    }
    else {
        return number1;
    }
}

int main() {

    int A,B,rA,rB;

    cin >> A >> B;

    rA = reversenumber(A);
    rB = reversenumber(B);

    cout << compare(rA,rB);

}