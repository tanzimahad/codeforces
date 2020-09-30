#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,m=0,c=0;

    vector<int>a1,a2;

    cin>>n;

    while(n--)
    {
        cin>>x>>y;

        a1.push_back(x);

        a2.push_back(y);
    }

    for(int i=0; i<a1.size(); i++)
    {
        if(a1[i]<a2[i])
        {
            c++;
        }
        else if(a1[i]>a2[i])
        {
            m++;
        }

    }

    if(c<m)
    {
        cout<<"Mishka";
    }
    else if(c>m)
    {
        cout<<"Chris";
    }
    else if(c==m)
    {
        cout<<"Friendship is magic!^^";
    }
}
