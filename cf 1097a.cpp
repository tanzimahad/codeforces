#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;

    int cnt=0;

    getline(cin,s);

    getline(cin,s1);

    for(int i=0; i<s1.size(); i=i+2)
    {
        if(s[0]==s1[i] || s[0]==s1[i+1])
        {
            cnt++;

            break;
        }
        else if(s[1]==s1[i] || s[1]==s1[i+1])
        {
            cnt++;

            break;
        }
    }

    if(cnt>0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
}
