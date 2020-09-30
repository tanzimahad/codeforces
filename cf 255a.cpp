#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int>a;

    int x;

    while(n--)
    {
        cin>>x;

        a.push_back(x);
    }

    int sum1=0,sum2=0,sum3=0,i=0;

    for(int i=0; i<a.size(); i=i+3)
    {
        if(i<a.size())
        {
            sum1 = sum1 + a[i];
        }

        if(i+1<a.size())
        {
            sum2 = sum2 + a[i+1];
        }

        if(i+2<a.size())
        {
            sum3 = sum3 + a[i+2];
        }

    }

    if (sum1 >= sum2 && sum1 >= sum3)
    {
        cout<<"chest";

    }

    else if (sum2 >= sum1 && sum2 >= sum3)
    {
        cout<<"biceps";
    }

    else
    {
        cout<<"back";
    }


}
