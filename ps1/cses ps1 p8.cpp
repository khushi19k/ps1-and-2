// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> x(n);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        x[i]={m,i+1};
    }
    sort(x.begin(),x.end());
    int count=1;
    int k=0;
    for(int i=0;i<n-1;i++){
        if(x[k+1].second<x[k].second) count++;
        k++;
    }
    cout<<count<<endl;
    return 0;
}