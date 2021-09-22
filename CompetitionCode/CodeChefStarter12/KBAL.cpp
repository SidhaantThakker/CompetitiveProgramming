#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int search1,search2,c=0,d=0;
    bool flag1,flag2;
    fi(n){
        if(s[i]=='0')
            continue;
        search1 = i+k;
        search2 = i-k;
        //cout<<search1<<endl;
        //cout<<search2<<endl;
        flag1 = true;
        flag2 = true;
        if(search1<n){
            if(s[search1]=='1')
                flag1 = false;
        }
        if(search2>=0){
            if(s[search2]=='1')
                flag2 = false;
        }
        if(flag1 && flag2){
            c++;
        }
    }
    fi(n){
        if(s[i]=='0')
            continue;
        search1 = i+k;
        search2 = i-k;
        //cout<<search1<<endl;
        //cout<<search2<<endl;
        flag1 = true;
        flag2 = true;
        if(search1<n){
            if(s[search1]=='1')
                flag1 = false;
        }
        if(search2>=0){
            if(s[search2]=='1')
                flag2 = false;
        }
        if(flag1 && flag2){
            if(search1<n){
                s[search1]='1';
            } else if(search2>=0) {
                s[search2]='1';
            }
            d++;
        }
    }
    cout<<min(c,d)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}