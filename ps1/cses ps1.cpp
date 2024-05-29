// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int b[m];
    for (int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int count=0;
    int p1=0;
    int p2=0;
    while(p1<n && p2<m ){
        if((b[p2]>=(a[p1]-k))&&(b[p2]<=(a[p1]+k))) {count++;p1++;p2++;}
        else if(b[p2]<a[p1]+k) p2++;
        else p1++;
    }
    cout<<count<<endl;
    return 0;
}