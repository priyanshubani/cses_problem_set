#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int gelly_moves = min(b, d);
        int flower_moves = min(a, c);

        if (gelly_moves <= flower_moves)
            cout << "Gellyfish" << endl;
        else
            cout << "Flower" << endl;
    }
    return 0;
}
