#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    n=n+1;

    int a=n;

    while(1)
    {
        int x=n%10;

        n=n/10;

        int y=n%10;

        n=n/10;

        int z=n%10;

        n=n/10;

        if(x!=y && x!=z && x!=n && y!=z && y!=n && z!=n)
        {
            cout<<a;
            break;
        }
        a=a+1;
        n=a;
    }

}
