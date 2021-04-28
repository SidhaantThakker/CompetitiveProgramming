#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a;
    int i=0;
    int m=0;
    for(i=0; i<n; i++){
        cin>>m;
        a.push_back(m);
    }

    vector<int> b;
    
    int p= *a.begin();
    int q= *a.begin();
    int r= *a.begin();
    int x=1;
    int y=1;
    int z=1;
    int k=1;

    for(auto j = a.begin(); j != a.end(); j++){
        if(*j != p && p == q){
            q=*j;
            y = k;
        }
        if(*j !=p && *j !=q && p != q){
            r =*j;
            z = k;
            break;
        }
        k++;
    }
    if(z!=x){
        if(p>q && p>r){
            if(q>r){
                printf("%d %d %d",z,y,x);
            }
            else{
                printf("%d %d %d",y,z,x);
            }
        }
        if(q>p && q>r){
            if(p>r){
                printf("%d %d %d",z,x,y);
            }
            else{
                printf("%d %d %d",x,z,y);
            }
        }
        if(r>p && r>q){
            if(p>q){
                printf("%d %d %d",y,x,z);
            }
            else{
                printf("%d %d %d",x,y,z);
            }
        }
    }
    else{
        printf("-1 -1 -1");
    }

    return 0;
}