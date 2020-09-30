#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0; i<n; i++) {
        ll k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll k=0;
    for(int i=0; i<n; i++) {
        if(v[i]!=i+1) {
            k+=abs(v[i]-(i+1));
        }
    }
    cout<<k;
}
