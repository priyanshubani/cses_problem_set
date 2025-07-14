#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int k,m,n,c=0;
    cin>>k>>m>>n;
    for(int i=1;i<=n;i++){
        c+=(i*k);
    }
    cout<<(c-m<0 ? 0 :c-m);
    
}