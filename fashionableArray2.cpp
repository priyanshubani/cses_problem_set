#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int n,c1=0,c2=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            
            if((a[n-1]+a[i])%2==0){
                break;
            }
            c1++;
        }
         for(int i=n-1;i>=1;i--){
            
            if((a[0]+a[i])%2==0){
                break;
            }
            c2++;
        }
        cout<<min(c1,c2)<<endl;
        t--;
    }
    return 0;
}
