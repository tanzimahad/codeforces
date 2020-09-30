#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[100000];

    int count=1;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
        {
            count++;
        }
    }
    cout<<count;
}
