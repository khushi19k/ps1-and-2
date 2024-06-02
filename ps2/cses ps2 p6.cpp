#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1000000007;
ll power(ll a, ll b) {
    a %= MOD;
    ll ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int flag=0;
    vector<int> x(n), k(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> k[i];
    }
    ll no = 1;
    for (int i = 0; i < n; i++) {
        no = no * (k[i] + 1) % MOD;
    }
    ll m = 1;
    for (int i = 0; i < n; i++) {
        m = (m * power(x[i], k[i])) % MOD;
    }
    ll sum = 1;
    for (int i = 0; i < n; i++) {
        ll numerator = (power(x[i], k[i] + 1) - 1 + MOD) % MOD; 
        ll denominator = power(x[i] - 1, MOD - 2);
        sum = sum * numerator % MOD * denominator % MOD;
    }
    ll count=1;
    for(int i=0;i<n;i++){
        count*=(k[i]+1)%MOD-1;
        if(k[i]%2!=0) {flag=1;
        break;}
    }
    ll product;
    if(flag==1) product = power(m, no / 2);
    else product=power(m, (no / 2)-1);

    cout << no << " " << sum << " " << product << endl;

    return 0;
}
