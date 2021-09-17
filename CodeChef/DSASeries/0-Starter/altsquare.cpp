#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=1;j<=5;j++){
                cout<<(i*5)+j<<" ";
            }
        } else {
            for(int j=5;j>=1;j--){
                cout<<(i*5)+j<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}