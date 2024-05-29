// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n>>x;
    vector <pair<int ,int>>a(n);
    for(int i=0;i<n;i++) {
        int m;
        cin>>m;
        a[i]={m,i+1};
    }
    sort(a.begin(),a.end());
    int p1=0;
    int p2=n-1;
    while(p1<p2){
        if((a[p1].first+a[p2].first)==x) {
            cout<<a[p1].second<<" "<<a[p2].second<<endl;
            return 0;}
        else if((a[p1].first+a[p2].first)>x) p2--;
        else p1++;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}