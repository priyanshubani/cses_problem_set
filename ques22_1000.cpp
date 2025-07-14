#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(char c:s){
        if(c >= 'A'&& c <= 'Z')c+=32;
        if(c == 'a' || c == 'o' || c== 'y'|| c=='e'|| c=='u' ||c=='i')continue;
        cout<<'.'<<c;
    }
}