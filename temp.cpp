#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<unsigned long long int> list;

void divide_number(unsigned long long int n) {
    if ( n == 0 )
        list.push_back(n);
    while (n != 0) {
        list.push_back(n%10);
        n /= 10;
    }
}

bool desc(unsigned long long int a, unsigned long long int b){ 
  return a > b; 
} 


int main() {
	int t;
    unsigned long long int n;

    cin >> t;

    for (int i=0; i < t; i++) {
        cin >> n;
        divide_number(n);
    }
    sort(list.begin(),list.end(),desc);

    if (list[0] == 0)
        cout << 0;
    else
        for (int i=0; i < list.size(); i++) {
            cout << list[i];
        }

}