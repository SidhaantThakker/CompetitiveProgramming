#include <bits/stdc++.h>
using namespace std;

int minPairs(int a, int b, int c){
    int forced;
    if(a>=b && a>=c){
        forced = a - (b+c+1);
    }
    if(b>=a && b>=c){
        forced = b - (a+c+1);
    }
    if(c>=b && c>=a){
        forced = c - (b+a+1);
    }
    if(forced<0)
        return 0;
    else 
        return forced;
}

int maxPairs(int a, int b, int c){
    if(a==0)
        a = 1;
    if(b==0)
        b = 1;
    if(c==0)
        c = 1;
    return (a-1)+(b-1)+(c-1);
}

void solve(){
    int a,b,c,m;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>m;
    //cout<<a<<" "<<b<<" "<<c<<" "<<m<<" "<<endl;
    int max = maxPairs(a,b,c);
    int min = minPairs(a,b,c);
    //cout<<"MAX "<<max<<endl;
    //cout<<"MIN "<<min<<endl;
    if(m<=max && m>=min){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}