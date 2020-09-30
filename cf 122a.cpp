#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a;

    cin>>a;

    if(a%4==0 || a%7==0 || a%47==0 || a%74==0 || a%444==0 || a%447==0 || a%477==0 || a%777==0 || a%774==0 || a%744==0)
    {
        cout<<"YES";
    }

    else
    {
        int count=0;

        while(a>0)
        {
            int mod=a%10;

            if(mod==1 || mod==2 || mod==3 || mod==5 || mod==6 || mod==8 || mod==9 || mod==0)
            {
                count++;
            }
            a=a/10;
        }

        if(count==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }


    return 0;
}
