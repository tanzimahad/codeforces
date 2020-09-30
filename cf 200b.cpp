#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n;
    float a;
    float b=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        b=b+a/100;
    }

    float ans=b/n;

    cout<<ans*100<<endl;

    return 0;
}
