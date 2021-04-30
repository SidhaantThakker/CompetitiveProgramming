#include <bits/stdc++.h>
using namespace std;

int divs(int a, int b){
    int k=0;
    while(a>0){
        a=a/b;
        k++;
    }
    return k;
}

void solve(){
    int a,b,min=31;
    cin>>a>>b;
    int i;
    int moves=31;
    for(i=b;i<b+30;i++){
        if(i==1)
            continue;
        moves = divs(a,i) + (i-b);
        if(moves<min){
            min = moves;
        }
    }
    cout<<min<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}