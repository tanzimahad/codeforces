#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        double n;

        cin>>n;

        double x;

        x = 360/(180-n);

        if(x-(int)x==0)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }


    }

}
