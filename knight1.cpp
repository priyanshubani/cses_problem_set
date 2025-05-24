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
    int n;
    cin>>n;
    long long int a;
    for(long long i=1;i<=n;i++){
        
        a=(((i*i)*((i*i)-1))/2)-(4*(i-1)*(i-2));
        cout<<a<<endl;

    }
    return 0;
}