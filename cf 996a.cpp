#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,count=0;

    cin>>n;

    if(n/100!=0)
    {
        count = n/100;

        n=n%100;

        if(n/20!=0)
        {
            count = count+ n/20;

            n= n%20;

            if(n/5!=0)
            {
                count = count + n/5;

                n = n%5;
            }
        }

    }
}
