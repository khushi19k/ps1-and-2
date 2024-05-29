#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000; // Maximum possible value of elements

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> freq(MAX + 1, 0);

    int max_element = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        freq[x[i]]++;
        if (x[i] > max_element) {
            max_element = x[i];
        }
    }

    // Iterate from the largest possible value down to 1
    for (int g = max_element; g >= 1; --g) {
        int multiple_count = 0;
        // Check multiples of g
        for (int multiple = g; multiple <= max_element; multiple += g) {
            multiple_count += freq[multiple];
        }
        // If more than one multiple exists, g is the maximum GCD
        if (multiple_count > 1) {
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}
