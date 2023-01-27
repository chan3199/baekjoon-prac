#include <iostream>
#include <algorithm>

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

    int F,L;

    cin >> F >> L;

    int arr[10001] = {0,};
    int count = 0;
    int min = 0;
    int total = 0;

    for (int i = F; i <= L; i++) {
        if (is_prime_number(i) == true)
            arr[count] = i;   
            count++;
    }

    sort(arr,arr+count);

    for (int i = 0; i < count; i++) {
        if (arr[i] > 0) {
            min = arr[i];
            break;
        }
    }

    if (min == 0) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < count; i++) {
        total += arr[i];
    }

    cout << total << "\n" << min;

    return 0;
}