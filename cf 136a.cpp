#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int count=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            count++;

            if(a[j]==i+1)
            {
                break;
            }
        }
        cout<<count<<" ";

        count=0;
    }


}


