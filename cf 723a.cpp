#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;

    int n=3,x;

    while(n--)
    {
        cin>>x;

        a.push_back(x);
    }
    sort(a.begin(),a.end());

    int p = a[1];

    cout<< p - a[0] + a[2] - p <<endl;
}
