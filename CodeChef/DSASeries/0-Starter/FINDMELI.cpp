#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    int num[n];
    int out = -1;
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>num[i];
    for(int i=0; i<n; i++)
        if(num[i] == k)
            out = 1;
    cout<<out;
    return 0;
}