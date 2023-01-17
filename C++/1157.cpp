#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int is_same=0,Max=0;
    int index;
	int num[27] = { 0, };
	char arr[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string S;
	cin >> S;
	for (int j = 0;j < S.length();j++)
		for (int k = 0;k < strlen(arr);k++)
			if (S[j] == arr[k] || S[j] == (arr[k]+32))
				num[k] = num[k] + 1;

	for (int i = 0; i < strlen(arr);i++)
		if (num[i] >= Max)
		{
			Max = num[i];
			index = i;
		}

	for (int i = 0; i < strlen(arr);i++)
		if (num[i] == Max)
			is_same++;
	if (is_same >= 2)
		cout << "?";
	else
		cout << arr[index];
		
		
	return 0;
}
