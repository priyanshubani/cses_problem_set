/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                s=s+i;
                break;
            }
        }
        if(s>=n)cout<<"NO"<<endl;
        else{
            for(int i=s;i<n;i++){
            if(a[i]==1){
                temp=1;
                             
            }
        }
        if(temp ==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }
        
    }
    return 0;
}