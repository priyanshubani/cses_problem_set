#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s[0]>=97){
        s[0]-=32;
    }
    cout<<s;
}