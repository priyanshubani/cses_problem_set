#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int &X:a)cin>>X;
    
    vector<int> b=a;
    
    sort(b.begin(),b.end());
    int val=b[k-1];

    vector<int> c;
    for(auto &x : a){
        if(x>val)continue;
        c.push_back(x);
    }
    bool ok = true;
    int count =c.size() -k+1 ;
    int i = 0, j = c.size()-1;
    
    while(i<j){
        if(c[i]!=c[j] ){
            if(count==0){
                ok = false;
                break;
            }
            else if(c[i]==val){
                --count;
                i++;
            }else if(c[j]==val){
                --count;
                j--;
            }else{
                ok = false;
                break;
            }
            continue;
        }
              
        
        i++;j--;
    }
    cout<<(ok ? "yes":"no")<<endl;
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}