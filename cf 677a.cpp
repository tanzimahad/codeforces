#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,h,a;

    cin>>n>>h;

    int count=0,count1=0;

    while(n--)
    {
        cin>>a;

        if(a>h)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    cout<<(count*2)+count1;

    return 0;

}
