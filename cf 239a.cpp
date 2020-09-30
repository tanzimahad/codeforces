#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll y,k,n,x=0;
    cin>>y>>k>>n;
    if(y+1>n) {
        cout<<-1;
        return 0;
    }
    vector<ll>v;
    for(ll i=k; i<=n; i+=k) {
        if(i%k==0 && i>y) {
            x=i-y;
            break;
        }
    }
    if(x==0) {
        cout<<-1;
    } else {
        ll ans=x;
        while(ans<=n-y) {
            cout<<ans<<" ";
            ans+=k;
        }
    }
}
