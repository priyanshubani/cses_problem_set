#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i])c++;
    }
    cout<<c;
}