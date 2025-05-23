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
    string s;
    cin>>s;
    int count=0,d=0;

    for(int i=1;i<s.length();i++){
        if(s[i-1]==s[i]){
            ++count;
           
        }
        else
            count=0;
        if(count>d)
                d=count;
    }
    cout<<d+1;
    return 0;
}
