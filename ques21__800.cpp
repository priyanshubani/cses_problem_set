#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n%5==0)cout<<n/5;
    else cout<<(n/5)+1;
}