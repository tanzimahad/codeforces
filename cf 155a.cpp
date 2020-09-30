#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a;

    int n,x,count = 1,y=0;

    cin>>n;

    if(n==1)
    {
        cin>>x;

        a.push_back(x);

        cout<<"0";
    }
    else
    {
        while(n--)
        {
            cin>>x;

            a.push_back(x);
        }

        int p = a[0],q;

        for(int i=0; i<a.size(); i++)
        {
            if(a[0]!=a[i])
            {
                q = a[i];

                y++;

                break;
            }
        }

        if(y==0)
        {
            cout<<"0";
        }
        else
        {
            if(p>q)
            {
                for(int i=1; i<a.size(); i++)
                {
                    if(a[i]>p)
                    {
                        p = a[i];

                        count++;
                    }

                    else if(a[i]<q)
                    {
                        q = a[i];

                        count++;
                    }
                }
            }

            else if(q>p)
            {
                for(int i=1; i<a.size(); i++)
                {
                    if(a[i]>q)
                    {
                        q = a[i];

                        count++;
                    }

                    else if(a[i]<p)
                    {
                        p = a[i];

                        count++;
                    }
                }
            }

            cout<<count;

        }
    }


    return 0;

}
