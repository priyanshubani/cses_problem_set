#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int a=0;
    cin>>s;
    unordered_map<char,int> mp;
    mp.reserve(26);
    for(char c : s){
        mp[c]++;
    }
    for(auto &x : mp){
        if(x.second>=1)a++;
    }
    cout<<(a%2==0 ? "CHAT WITH HER!": "IGNORE HIM!");
    return 0;
}