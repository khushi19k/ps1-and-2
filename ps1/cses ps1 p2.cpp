// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    int p1=0;
    int p2=n-1;
    int count=0;
    int m;
    while(p1<=p2){
        if(p[p1]+p[p2]<=x){ count++;
        p1++;p2--;}
        else {p2--;m++;}
    }
    count+=m;
    cout<<count;
    return 0;
}