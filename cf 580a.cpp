#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<long long int>a;

    int count=1,count1=1;

    for(int i=0; i<n; i++)
    {
        long long int x;

        cin>>x;

        a.push_back(x);

    }

    for(int i=1; i<a.size(); i++)
    {
        if(a[i]>=a[i-1])
        {
            count++;
        }
        else if(a[i-1]>a[i])
        {
            if(count>=count1)
            {
                count1=count;
            }

            count=1;
        }
    }

    if(count<count1)
    {
        cout<<count1;
    }
    else
    {
        cout<<count;
    }

    return 0;
}
