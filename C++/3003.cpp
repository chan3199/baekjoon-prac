#include <iostream>
 
using namespace std;
 
int main() {
    
    int k = 1;
    int q = 1;
    int v = 2;
    int r = 2;
    int n = 2;
    int p = 8;

    int k_in, q_in, v_in, r_in, n_in, p_in;

    cin >> k_in;
    cin >> q_in;
    cin >> r_in;
    cin >> v_in;
    cin >> n_in;
    cin >> p_in;

    cout << k - k_in << " ";
    cout << q - q_in << " ";
    cout << r - r_in << " ";
    cout << v - v_in << " ";
    cout << n - n_in << " ";
    cout << p - p_in << " ";
 
    return 0;
}