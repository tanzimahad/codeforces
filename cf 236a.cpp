#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];

    char result[100]= {0};

    gets(str);

    int len,i,j,count,k=0;

    len=strlen(str);

    for(i=0; i<len; i++)
    {
        count=0;

        for(j=0; j<i; j++)
        {
            if(str[i]==result[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            result[k++]=str[i];
        }
    }

    int x = strlen(result);

    if(x%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}




