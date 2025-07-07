/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

const long MOD = 1e9+7;

long long power(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        long long maxi;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            maxi=0;
            for(int j=0,k=i;j<=i;j++,k--){
                long long sum=0;
                sum=(power(2,a[j])+power(2,b[k]))%MOD ;
                maxi=max(maxi,sum);
            }
            cout<<maxi<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}