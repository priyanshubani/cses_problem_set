#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p=0;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>1)p++;
    }
    cout<<p;

    return 0;
}