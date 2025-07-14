#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &x : a)cin>>x;
    if(a[0]==0){
        cout<<0<<endl;
    }
    else{
        int l=0;
        int r=n-1;
        int res=0;
        while(l<=r){
            if(a[l]>=a[k-1] && a[l]!=0)res++;
            l++;
        }
        cout<<res<<endl;
    }
    return 0;
}