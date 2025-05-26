#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> feq(26,0);
    for(char c:s) feq[c -'A']++;
    int index=-1,flag=0;
    for(int i=0;i<26;i++){
        if(feq[i]%2!=0){
            flag++;
            index=i;
        }
        
    }
    string half="",middle="",rev="";
    if(flag>1) cout<<"NO SOLUTION"<<endl;
    else{
        if(index!=-1)
            middle='A'+index;
        for(int i=0;i<26;i++){
            int a=feq[i]/2;
            while(a!=0){
                half+='A'+i;
                a--;
            }

        }
        rev=half;
        reverse(rev.begin(),rev.end());
        
            cout<<half+middle+rev<<endl;
    }
    return 0;
}