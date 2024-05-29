// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<pair<int,int>,int>> v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i].first={a,b};
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    priority_queue <pair<int,int>> p;
    int ans[n];
    int rooms=0;
    int no=0;
    for(int i=0;i<n;i++){
        if(p.empty()) {
            no++;
            p.push(make_pair(-v[i].first.second,no));
            ans[v[i].second]=no;
        }else{
            pair<int,int> min=p.top();
            if(-min.first<v[i].first.first){
                p.pop();
                p.push(make_pair(-v[i].first.second,min.second));
                ans[v[i].second]=min.second;
            }else{
                no++;
                p.push(make_pair(-v[i].first.second,min.second));
                ans[v[i].second]=no;
            }
        }
        rooms=int(p.size());
    }
    cout<<rooms<<"\n";
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}