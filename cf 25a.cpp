#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,even=0,odd=0,even_=0,odd_=0;

    cin>>n;

    int a[100];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            even++;
            even_=i+1;
        }
        else
        {
            odd++;
            odd_=i+1;
        }
    }

    if(even==1)
    {
        cout<<even_;
    }

    else
    {
        cout<<odd_;
    }

    return 0;
}
