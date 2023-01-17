#include <iostream>

using namespace std;

int main(){
    int n, sum=0;
    char num[100];
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>num[i];
        sum+=(int)(num[i]-'0');
    }
    cout<< sum;

    return 0;
}