#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count=0,count1=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            count1++;
        }

    }

    if(count>count1)
    {
        cout<<"Anton";
    }
    else if(count1>count)
    {
        cout<<"Danik";
    }
    else if(count==count1)
    {
        cout<<"Friendship";
    }
}
