#include <iostream>

using namespace std;

int main(){

    int N; 
    int cnt = 2;

    cin>>N;

    int i = 1;
    if(N == 1)
        cout<<1;


    else{
        while(N>=cnt){
            cnt += i*6;
            i++;
        }
            cout<<i;
    }

    return 0;
}