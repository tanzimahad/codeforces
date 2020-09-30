#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a1;

    int n,p,q,x,y,count=0;

    cin>>n;

    cin>>p;

    for(int i=0; i<p; i++)
    {
        cin>>x;

        a1.push_back(x);
    }

    cin>>q;

    for(int i=0; i<q; i++)
    {
        cin>>y;

        a1.push_back(y);
    }

    sort(a1.begin(),a1.end());

    for(int i=0; i<p+q; i++)
    {
        if(a1[i]!=a1[i+1])
        {
            count++;
        }
    }

    if(n == (count))
    {
        cout << "I become the guy." <<endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }








}
