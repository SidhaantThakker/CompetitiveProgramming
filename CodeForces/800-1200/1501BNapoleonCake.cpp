#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        int x;
        vector<int> vec;
        vector<int> lay;
        for(int i = 0; i < l; i++){
            cin>>x;
            vec.push_back(x);
            lay.push_back(0);
        }
        int min = l-1 - vec[l-1];
        for(int i=l-1;i>=0;i--){
            if((i - vec[i]) < min)
                min = i - vec[i];

            if(min<i)
                lay[i] = 1;
        }
        for(int i = 0; i < l; i++){
            cout<<lay[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}