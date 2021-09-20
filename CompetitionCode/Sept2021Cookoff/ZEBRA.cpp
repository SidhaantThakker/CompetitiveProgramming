#include <bits/stdc++.h>
using namespace std;
char swap(char c){
    if(c=='0')
        return '1';
    else
        return '0';
}
void solve(){
    int n,k,j=0;
    string s;
    cin>>n;
    cin>>k;
    cin>>s;
    int search;
    int init = s[0];
    int end = 0;
    if(k%2==0){
        search = init;
    } else {
        search = swap(init);
    }
    //cout<<"search "<<search-'0'<<'\n';
    for(int i=n-1;i>=0;i--){
        if(j==k){
            cout<<end+1<<"\n";
            return;
        }
        if(s[i] == search){
            //cout<<"Found at "<<i<<'\n';
            if(j==0){
                end = i;
            }
            j++;
            search = swap(search);
            //cout<<"new search "<<search-'0'<<'\n';
        } else {
            continue;
        }
    }
    cout<<"-1"<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}