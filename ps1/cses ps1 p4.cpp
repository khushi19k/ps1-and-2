// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector <pair<int,int>> t;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a;
        t.push_back({a,1});
        cin>>b;
        t.push_back({b,-1});
    }
    sort(t.begin(),t.end());
    int count=0;
    int m=0;
    for(int i=0;i<t.size();i++){
        count+=t[i].second;
        m=max(count,m);
    }
    cout<<m<<endl;
    return 0;
}