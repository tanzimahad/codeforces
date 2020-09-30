#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n,m,x=0,y=0;
    cin>>n;
    long long int a[100000];
    for(int i=1; i<=n; i++) {
        long long int k;
        cin>>k;
        a[k]=i;
    }
    cin>>m;
    while(m--) {
        long long int k;
        cin>>k;
        x+=a[k];
        y+=n+1-a[k];
    }
    cout<<x<<" "<<y<<endl;
}
