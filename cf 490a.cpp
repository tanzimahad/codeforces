#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int>a,b,c,d,e;

    while(n--)
    {
        int x;

        cin>>x;

        a.push_back(x);

    }

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==1)
        {
            b.push_back(i+1);
        }
        else if(a[i]==2)
        {
            c.push_back(i+1);
        }
        else
        {
            d.push_back(i+1);
        }
    }

    int p,q,r;

    p=b.size();

    q=c.size();

    r=d.size();

    int k;

    if (p <= q && p <= r)
    {
        k = p;
    }
    else if (q <= r && q <= p)
    {
        k = q;
    }
    else
    {
        k = r;
    }

    int i =0;

    cout<<k<<endl;

    while(k--)
    {
        cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;

        i++;
    }
}
