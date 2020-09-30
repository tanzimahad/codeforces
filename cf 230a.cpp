#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,x,y,count=0;
    cin>>s;
    int n,k;
    cin>>n;
    k=n;

    vector<int>a1,a2;

    while(k--)
    {
        cin>>x;

        a1.push_back(x);

        cin>>y;

        a2.push_back(y);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a1[j]>a1[j+1])
            {
                swap(a1[j],a1[j+1]);
                swap(a2[j],a2[j+1]);
            }
        }
    }


    for(int i=0; i<a1.size(); i++)
    {
        if(s>a1[i])
        {
            s=s+a2[i];

            count++;
        }
    }

    if(count==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
