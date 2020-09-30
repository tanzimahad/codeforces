#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,p,q;

    cin>>a>>b;

    int x = a;

    if(a<b)
    {
        cout<<a;
    }
    else
    {
        while(1)
        {
            q = a/b ;
            p = a%b;
            a=p+q;

            x = x +q;

            if(a<b)
            {
                break;
            }
        }

        cout<<x;
    }

    return 0;
}
