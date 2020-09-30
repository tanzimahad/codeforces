#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
      ll cnt=0,ans=0,n;
      cin>>n;
      vector<ll>v[2*n];
      for(int i=0;i<2*n;i++)
      {
          ll x;
          cin>>x;
          v[x].push_back(i);
      }
      ans=v[1][0]+v[1][1];
      for(int i=2;i<=n;i++)
      {
          ans+=abs( v[i][0] - v[i-1][0] )   + abs( v[i][1] - v[i-1][1]);
      }
      cout<<ans<<endl;
}


