#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n, a = 0, b = 0, lead = 0;
    string s;
    cin>>n>>s;
    int al = n, bl =n;
    fi(2*n){
        if(i%2==0) {
            al--;
            if(s[i]=='1')
                a++;
            
            lead = a-b;

            if(lead > bl || lead < -al){
                cout<<i+1<<'\n';
                return;
            }
        } else {
            bl--;
            if(s[i]=='1')
                b++;

            lead = b-a;

            if(lead > al || lead<-bl){
                cout<<i+1<<'\n';
                return;
            }
        }
    }
    cout<<2*n<<'\n';
    return;
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