#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    int sum = 1;
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                ++count;
                n /= i;
            }
            sum = (sum * ((int)(pow(i, count + 1) - 1) / (i - 1))) % M;
        }
    }
    if (n > 1) {
        sum = (sum * ((int)(pow(n, 2) - 1) / (n - 1))) % M;
    }
    
    cout << sum << endl;
    
    return 0;
}
