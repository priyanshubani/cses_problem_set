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
    int t;
    cin>>t;
    while(t){
        long long int y,x;
        cin>>y>>x;
        long long int a;
        a=max(y,x);
        if(a==y){
            //for odd y
            if(y%2!=0)
                a=((y-1)*(y-1)+1)+(x-1);
            //for even y
            else
                a=(y*y)-(x-1);
        }
        else{
            //for odd x
            if(x%2==0)
                a=((x-1)*(x-1)+1)+(y-1);
            //roe even x
            else
                a=(x*x)-(y-1);
        }
        cout<<a<<endl;
        t--;
    }
    return 0;
}