#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

long long power(long long a, long long b, long long m) {
    a %= m;
    long long ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        long long a, b,c;
        cin >> a >> b>>c;
        long long ans1=power(b,c,MOD-1);
        cout<<power(a,ans1,MOD)<<endl;
    }
    
    return 0;
}
