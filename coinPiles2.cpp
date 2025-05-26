/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

void find(long long p1,long long p2){
    if(p1<p2){
        find(p2,p1);
        return;
    } 
   
    if((p1 + p2) % 3 == 0 && p2*2>=p1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t){
        long long p1,p2;
        cin>>p1>>p2;
        find(p1,p2);
        t--;
    }
    return 0;
}