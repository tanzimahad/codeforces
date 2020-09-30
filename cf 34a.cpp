#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++) {
        int k;
        cin>>k;
        v.push_back(make_pair(k,i+1));
    }
    int cnt=abs(v[n-1].first-v[0].first),x=v[n-1].second,y=v[0].second;

    for(int i=1; i<v.size(); i++) {
        if(abs(v[i].first-v[i-1].first)<cnt) {
            cnt=abs(v[i].first-v[i-1].first);
            x=v[i-1].second;
            y=v[i].second;
        }
    }
    cout<<x<<" "<<y<<endl;
}
