#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,p,count=0;

    cin>>n>>k;

    vector<int>a;

    while(n--)
    {
        cin>>p;

        a.push_back(p);
    }

    for(int i = 0; i < a.size(); i++)
    {
        if (5 - a[i] >= k)
        {
            count++;
        }
    }

    cout<<count/3;

}
