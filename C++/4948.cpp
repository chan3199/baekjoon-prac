#include <iostream>

using namespace std;

bool arr[246913] = {false,};

void is_prime_number(int x) {

    arr[246,913] = {false,};

	for (int i = 2; i <= x; i++)
	{
		if (!arr[i])
		{
			for (int j = 2*i; j <= x; j += i)
			{
				arr[j] = true;
			}
		}
	}

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;

    while (1) {
        
        cin >> M;

        if (M == 0)
            break;

        arr[0] = true;
        arr[1] = true;

        int count = 0;

        is_prime_number(M*2);

        for (int i = M+1; i <= M*2; i++) {
            if (!arr[i]) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}