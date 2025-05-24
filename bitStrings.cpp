/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/
const int MOD = 1e9 + 7;
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long exp,base=2;
    cin>>exp;
    long long result=1;
    while(exp>0){
        if(exp%2==1){
            result=(result*base)%MOD;
        }
        base=(base*base)%MOD;
        exp/=2;
    }
    
    cout<<result<<endl;
    return 0;
}

