#include<iostream>
using namespace std;

int main()
{
    long long int m,n,a,x,y;

   cin>>m>>n>>a;

    if(m%a==0)
    {
        x=m/a;
    }
    else if(m%a!=0)
    {
        x=(m/a)+1;
    }
    if(n%a==0)
    {
        y=n/a;
    }
    else if(n%a!=0)
    {
        y=(n/a)+1;
    }

    cout<<x*y<<endl;
}
