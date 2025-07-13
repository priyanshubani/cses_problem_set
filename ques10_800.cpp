#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a=0;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s[1]=='+')a++;
        else a--;
    }
    cout<<a;

}