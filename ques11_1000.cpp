#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long tiles_in_height = (n + a - 1) / a;
    long long tiles_in_width = (m + a - 1) / a;

    cout << tiles_in_height * tiles_in_width << endl;
    return 0;
}
