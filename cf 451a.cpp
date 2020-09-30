#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,count=0;
    cin>>n>>m;

    while(1)
    {
        int x=n*m;
        count++;
        if(x==0)
        {
            break;
        }

        n--;
        m--;
    }

    if(count%2==0)
    {
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }

}
