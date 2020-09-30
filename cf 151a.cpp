#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a1 = (k*l)/(n*nl);

    int b1 = (c*d)/n;

    int c1 = (p)/(n*np);

    vector<int>v;

    v.push_back(a1);

    v.push_back(b1);

    v.push_back(c1);

    sort(v.begin(),v.end());

    cout<<v[0]<<endl;

    return 0;

}
