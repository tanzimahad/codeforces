#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    int count=0;
    cin>>x>>y;


    while(1)
    {
        x=x*3;
        y=y*2;
        count++;
        if(x>y)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    cout<<count;
}
