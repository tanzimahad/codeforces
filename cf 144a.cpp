#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;

    vector<int>a1,a2,a3,a4;

    cin>>n;

    while(n--)
    {
        cin>>x;

        a1.push_back(x);

        a2.push_back(x);
    }

    sort(a2.begin(),a2.end());

    int p,q;

    p=a2[0];

    q=a2[a2.size()-1];

    for(int i=0; i<a1.size(); i++)
    {
        if(p==a1[i])
        {
            a3.push_back(i);
        }
        if(q==a1[i])
        {
            a4.push_back(i);
        }
    }

    sort(a3.begin(),a3.end());

    sort(a4.begin(),a4.end());

    p = a3[a3.size()-1];

    q = a4[0]+1;

//    cout<<a1.size()<<endl;
//
//    cout<<p<<endl<<q;

 cout<<(a1.size()-1-p)+q;

    return 0;
}
