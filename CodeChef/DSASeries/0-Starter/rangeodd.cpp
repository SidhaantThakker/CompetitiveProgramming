#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    for(int i = (l%2==0)?l+1:l; i<=r; i+=2){
        cout<<i<<" ";
    }
    return 0;
}