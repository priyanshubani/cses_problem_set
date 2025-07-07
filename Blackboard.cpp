/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
string getWinner(int n) {
   
    if (n % 4 == 0 || n % 4 == 3) {
        return "Bob";
    } else {
        return "Alice";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << getWinner(n) << '\n';
    }
    return 0;
}