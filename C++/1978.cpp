#include <iostream>

using namespace std;

bool is_prime_number(int x) {
    if (x == 1) {
        return false;
    }
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    int N;
    int arr[101]; 
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (is_prime_number(arr[i]))
            count++;
    }
    cout << count;
}