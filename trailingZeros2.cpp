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
    int n;
    cin >> n;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    cout << count << endl;
    return 0;
}