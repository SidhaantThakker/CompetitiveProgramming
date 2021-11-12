#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
#define fj(n) for(int j = 0; j < n; ++j)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    bitset<3>  my_set;
    vector<int> pts(3);
    int n;
    cin>>n;
    string s;
    unordered_set<string> p1;
    unordered_set<string> p2;
    unordered_set<string> p3;
    unordered_set<string> p;
    fi(n){
        cin>>s;
        p1.insert(s);
        p.insert(s);
    }
    fi(n){
        cin>>s;
        p2.insert(s);
        p.insert(s);
    }
    fi(n){
        cin>>s;
        p3.insert(s);
        p.insert(s);
    }
    for(auto i = p.begin(); i!=p.end(); i++){
        my_set[0] = !(p1.find(*i) == p1.end());
        my_set[1] = !(p2.find(*i) == p2.end());
        my_set[2] = !(p3.find(*i) == p3.end());

        if(my_set[0] && my_set[1] && my_set[2]){
            pts[0]+=5;
            pts[1]+=5;
            pts[2]+=5;
        } else if(my_set[0] && my_set[1]){
            pts[0]+=3;
            pts[1]+=3;
        } else if(my_set[1] && my_set[2]){
            pts[1]+=3;
            pts[2]+=3;
        } else if(my_set[2] && my_set[0]){
            pts[2]+=3;
            pts[0]+=3;
        } else if(my_set[0]){
            pts[0]+=1;
        } else if(my_set[1]){
            pts[1]+=1;
        } else if(my_set[2]){
            pts[2]+=1;
        } 
    }
    sort(pts.begin(), pts.end(), greater<int>());

    for(auto i = pts.begin(); i !=pts.end(); i++){
        cout<<*i<<" ";
    }
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}