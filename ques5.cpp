#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a==b){
        cout<<0<<endl;
    }else if(a>b){
        if(a-b == 1 && a%2==1){
            cout<<y<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }else{
        if(x<=y)cout<<(b-a)*x<<endl;
        else{
            cout<<((b-a)-((b)/2-(a)/2))*x + ((b)/2-(a)/2)*y<<endl;
        }
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    
    return 0;

}