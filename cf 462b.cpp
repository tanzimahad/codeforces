#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll cnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    for(int i=0; i<n; i++) {
        cnt[s[i]-'A']++;
    }
    sort(cnt,cnt+26);
    reverse(cnt,cnt+26);

    ll i=0,ans=0;

    while(1) {
        if(cnt[i]<=k && i<26) {
            k-=cnt[i];
            ans+=cnt[i]*cnt[i];
            i++;
        } else {
            ans+=k*k;
            break;
        }
    }
    cout<<ans;
}
