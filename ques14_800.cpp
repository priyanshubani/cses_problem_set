#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>a(5,vector<int>(5,0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int c,b,i,j;
        for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(a[i][j]==1){
                c = i;
                b = j;
            }
        }
        
    }cout<<abs(2-c)+abs(2-b)<<endl;
    
    return 0;
}