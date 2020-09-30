#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n<0)
    {
        n=n*-1;

       int p,q;

       p=n/10;

       q=(n%10)+(n/100)*10;

       if(p>q)
       {
           cout<<q*-1;
       }
       else
       {
           cout<<p*-1;
       }
    }

    else
    {
        cout<<n;
    }
}
