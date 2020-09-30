#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    int x= n-1;
    while(x--)
    {
        if(i%2==0)
        {
            cout<<"I love that ";
        }
        else
        {
            cout<<"I hate that ";
        }
        i++;
    }

    if(n%2==0)
    {
        cout<<"I love it ";
    }
    else
    {
        cout<<"I hate it ";
    }

}
