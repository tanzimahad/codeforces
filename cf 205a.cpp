#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=1; i<=n; i++) {
        ll k;
        cin>>k;
        v.push_back(make_pair(k,i));
    }
    sort(v.begin(),v.end());
    if(v[0].first!=v[1].first) {
        cout<<v[0].second;
    } else {
        cout<<"Still Rozdil"<<endl;
    }
}
