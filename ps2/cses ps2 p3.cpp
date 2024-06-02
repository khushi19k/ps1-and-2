#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    while (n--) {
        int x;
        cin >> x;
        int count = 0;
        
        for (int i = 1; i * i <= x; ++i) {
            if (x % i == 0) {
                if (i * i == x) {
                    count += 1;
                } else {
                    count += 2; 
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
