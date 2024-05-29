// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;  // Sort by first element in ascending order
    } else {
        return a.second > b.second;  // Sort by second element in descending order
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> m;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        m.push_back({b,a});
    }
    sort(m.begin(),m.end(),customComparator);
    
    int max=1;
    int p = m[0].first;
    for(int i=0;i<n-1;i++){
        if(p<=m[i+1].second){ 
            max++;
            p = m[i+1].first;

        }
    }
    
    cout<<max<<endl;
    return 0;
}