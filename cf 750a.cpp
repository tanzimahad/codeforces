#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,count=0,sum=5,a=2;

    cin>>n>>k;

    int p = 240-k;

    for(int i=0; i< n; i++)
    {
        if(sum<=p)
        {
            count++;
            sum = sum + (5*a);
            a++;

        }
        else
        {
            break;
        }
    }

    cout<< count;
}
