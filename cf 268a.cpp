#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100],b[100],count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(b[i]==a[j] && a[i]==b[j])
            {
                count=count+2;
            }
            else if(b[i]==a[j])
            {
                count++;
            }
            else if(a[i]==b[j])
            {
                count++;
            }
        }

    }

    cout<<count;

    return 0;
}
