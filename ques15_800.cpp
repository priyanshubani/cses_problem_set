#include<bits/stdc++.h>
using namespace std;
 int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin>>a>>b;
    int s= a.length();
    for(int i=0;i<s;i++){
        if(a[i]<97) a[i]+=32;
        if(b[i]<97) b[i]+=32;
        if(a[i]!=b[i]){
            if(a[i]>b[i])cout<<1;
            else cout<<-1;
                return 0;
        }
        
    }
    cout<<0;

 }