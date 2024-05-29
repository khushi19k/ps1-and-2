// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    multiset <int> price;
    int h;
    for(int i=0;i<n;i++) {cin>>h;
    price.insert(h);}
   int t[m];
    for(int i=0;i<m;i++) {
        cin>>t[i];
    }
    for(int i=0;i<m;i++) {
        auto j=price.upper_bound(t[i]);
        if(j!=price.begin()){
        cout<< *(--j) <<endl;
        price.erase(j);}
        else{
            cout<<"-1"<<endl;
        }
    } 
    
    
    return 0;
}