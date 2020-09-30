#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;

    int n,x,sum=0;

    cin>>n;

    while(n--)
    {
       cin>>x;
       a.push_back(x);
    }

    sort(a.begin(),a.end());

    int p = a[a.size()-1];

    for(int i = 0; i<a.size(); i++)
    {
        sum = sum + (p - a[i]);
    }

    cout<<sum;

    return 0;
}
