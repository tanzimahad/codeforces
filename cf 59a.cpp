#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{

    char s[100];
    gets(s);

    int up=0,low=0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            up++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            low++;
        }
    }

    if(up>low)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else if(low>up)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }

    else if(up==low)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }

    cout<<s;
}
