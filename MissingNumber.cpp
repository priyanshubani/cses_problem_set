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
    int a,b=0;
    for(int i=0;i<n-1;i++){
        cin>>a;
        b^=a;
    }
    for(int i=1;i<=n;i++){
        b^=i;
    }
    cout<<b;
    return 0;
}