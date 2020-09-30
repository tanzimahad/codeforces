#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,p=0,count=1;

    vector<int>a1,a2,a3;

    cin>>n;

    while(n--)
    {
        cin>>x>>y;

        a1.push_back(x);

        a2.push_back(y);
    }

    for(int i=1; i<a1.size(); i++)
    {
        if(a1[i]==a1[i-1])
        {
            if(a2[i]==a2[i-1])
            {
                count++;
            }
            else
            {
                p = count;

                a3.push_back(p);

                count = 1;
            }
        }
    }

    for(int i=0; i<a3.size(); i++)
    {
        cout<<a3[i]<<" ";
    }


    return 0;
}
