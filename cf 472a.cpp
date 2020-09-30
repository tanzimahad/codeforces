#include<bits/stdc++.h>

using namespace std;

int prime(int x)
{
    long long int count=0;

    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            count++;

            break;
        }
    }

    return count;
}

void ans(int n)
{
    long long int a=4,b=n-4;

    while(1)
    {
        if(prime(a)>0 && prime(b)>0)
        {
            cout<<a<<" "<<b<<endl;

            break;
        }

        a++;
        b--;

    }
}

int main()
{
    long long int n;

    cin>>n;

    ans(n);

}
