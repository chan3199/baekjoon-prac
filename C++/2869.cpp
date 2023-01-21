#include <iostream>

using namespace std;

int main() {

	int A,B,V;
	cin >> A >> B >> V;
    
    if (A>=V) 
        cout << 1;
    
    else
        cout << (V-B-1) / (A-B)+1;

}