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
    long long n;
    cin>>n;
    vector<long long> s1,s2;
    
    long long a = (n*(n+1))/2;
    if(a%2!=0)
        cout<<"NO"<<endl;
    else{
        
        long long target=a/2;
        for(long long i=n;i>=1;i--){
            if(i<=target){
              s1.push_back(i);
              target-=i;  
            }
            else{
                s2.push_back(i);
            }
        }
    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(long long i : s1)cout<<i<<" ";
    cout<<endl;
    cout<<s2.size()<<endl;
    for(long long i : s2)cout<<i<<" ";
    cout<<endl;
    

    }
    return 0;
    
}