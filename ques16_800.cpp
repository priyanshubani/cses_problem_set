#include<bits/stdc++.h>
using namespace std;

void x(int a,vector<int> &c){
    
    for(int i=0;i<a;i++){
        if(i)cout<<"+";
        cout<<c[i];
    }
    
   return; 
 }
 int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);


    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(char c : s){
        if(c=='1')c1++;
        if(c=='2')c2++;
        if(c=='3')c3++;
    }
    vector<int>out;
    out.reserve(c1 + c2 + c3);
    for (int i = 0; i < c1; i++) out.push_back(1);
    for (int i = 0; i < c2; i++) out.push_back(2);
    for (int i = 0; i < c3; i++) out.push_back(3);
    x(out.size(), out);
    return 0; 
}