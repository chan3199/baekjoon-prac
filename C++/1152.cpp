#include<iostream>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {

    char s[1000001];
    cin.getline(s,1000001,'\n');

    char *ptr = strtok(s," ");
    
    int count = 0;

    while (ptr != NULL) {
        count++;
        ptr = strtok(NULL, " ");
    }

    cout << count;

    return 0;
}