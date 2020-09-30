#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++) {
        ll k;
        cin>>k;
        v.push_back(k);

    }
    if(n==2) {
        cout<<1;
        return 0;
    }
    vector<ll>a(200050);
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            a[v[i]+v[j]]++;
        }
    }
    int x=*max_element(a.begin(),a.end());

    cout<<x;

//for(auto k:a)
//    cout<<k<<" ";
}
