#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,a,b;
    cin>>n;
    vector<ll>vb;

    ll ans_va=0;

    for(int i=0; i<n; i++) {
        ll k;
        cin>>k;
        ans_va+=k;
    }
    for(int i=0; i<n; i++) {
        ll k;
        cin>>k;
        vb.push_back(k);
    }
    sort(vb.begin(),vb.end());
    reverse(vb.begin(),vb.end());

    if(ans_va>(vb[0]+vb[1])){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
