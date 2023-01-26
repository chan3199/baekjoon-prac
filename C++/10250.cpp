#include <iostream>

using namespace std;

int main() {

	int T,H,W,N;
	
    cin >> T;

    for (int i = 0; i < T; i++) {
        int room;
        cin >> H >> W >> N;
        
        if (N%H == 0)
            room = H * 100 + (N/H);
        else
            room = (N%H) * 100 + (N/H)+1;

        cout << room << "\n";
    }
    return 0;
}