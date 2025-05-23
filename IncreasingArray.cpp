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
    long long int n,x,prev=0,moves=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(prev<=x)
            prev=x;
        else    
            moves+=(prev-x);
    }
    cout<<moves<<endl;

    return 0;
}