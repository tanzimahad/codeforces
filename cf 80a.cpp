#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int count=0;

    n++;

    while(1)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }

        if(count==0)
        {
            if(n==m)
            {
                cout<<"Yes";
                break;
            }
            else
            {
                cout<<"NO";
                break;
            }
        }
        n++;
    }

}
