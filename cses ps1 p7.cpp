#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort the array in ascending order
    sort(a, a + n);
    
    long long int count = 0;
    
    // Calculate median index or median indices for even n
    int medianIndex1 = (n - 1) / 2;
    int medianIndex2 = n / 2; // Second median index for even n
    
    // Calculate operations to balance elements around the median(s)
    long long int c1 = 0;
    long long int c2 = 0;
    
    // For odd n
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            if (a[i] < a[medianIndex1]) {
                c1 += (a[medianIndex1] - a[i]);
            } else if (a[i] > a[medianIndex1]) {
                c1 += (a[i] - a[medianIndex1]);
            }
        }
        cout << c1 << endl;
    } 
    // For even n
    else {
        for (int i = 0; i < n; i++) {
            if (a[i] < a[medianIndex1]) {
                c1 += (a[medianIndex1] - a[i]);
            } else if (a[i] > a[medianIndex1]) {
                c1 += (a[i] - a[medianIndex1]);
            }
            if (a[i] < a[medianIndex2]) {
                c2 += (a[medianIndex2] - a[i]);
            } else if (a[i] > a[medianIndex2]) {
                c2 += (a[i] - a[medianIndex2]);
            }
        }
        cout << min(c1, c2) << endl;
    }
    
    return 0;
}
