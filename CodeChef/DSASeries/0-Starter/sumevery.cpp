#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int s1=0,s2=0;
    for(int i=1;i<=2*n;i+=2){
        s1=s1+i;
    }
    for(int i=2;i<=2*n;i+=2){
        s2=s2+i;
    }
    cout<<s1<<" "<<s2;
    return 0;
}