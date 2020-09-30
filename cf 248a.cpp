#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,cnt1=0,cnt2=0,cnt3=0,cnt4=0,p,q;

    vector<int>a1,a2;

    cin>>n;

    int k = n;

    while(k--)
    {
        cin>>x>>y;

        a1.push_back(x);

        a2.push_back(y);

    }

    for(int i = 0; i<n; i++)
    {
        if(a1[i] == 0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }

        if(a2[i] == 0)
        {
            cnt3++;
        }

        else
        {
            cnt4++;
        }
    }

     p = min(cnt1,cnt2);

     q = min(cnt3,cnt4);

     cout<< p+q;
}
