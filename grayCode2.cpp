/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
string convert(int nums,int n){
    string str="";
    for(int i=n-1;i>=0;i--){
        str+=((nums>>i)&1)+'0';
    }
    return str;
}
int main(){
    int n,gray;
    cin>>n;
    int total=1<<n;
    for(int i=0;i<total;i++){
        gray=i^(i>>1);
        cout<<convert(gray,n)<<endl;
    }
    return 0;
}