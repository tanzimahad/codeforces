#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    char s[1000];
    gets(s);

    if(s[0]>='a'&&s[0]<='z')
    {
        s[0]=s[0]-32;
    }
    cout<<s;
}
