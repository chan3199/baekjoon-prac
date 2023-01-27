#include <iostream>
#include <algorithm>

using namespace std;

bool arr[1000001] = {false,};

void is_prime_number(int x) {

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

    int M,N;

    cin >> M >> N;

    arr[0] = true;
    arr[1] = true;

    is_prime_number(N);

    for (int i = M; i <= N; i++) {
        if (!arr[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}