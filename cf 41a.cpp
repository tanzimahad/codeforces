#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s1[1000],s2[1000];

    gets(s1);
    gets(s2);

    if( strcmp(s1,strrev(s2))==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
