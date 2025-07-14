#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int s=0,a,b;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        s++;
    }
    cout<<s;
}