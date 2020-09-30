#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;


    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== 'W' && s[i+1]== 'U' && s[i+2]== 'B' )
        {
            s.erase(remove(s.begin(),s.end(),s[i]),s.end());
            s.erase(remove(s.begin(),s.end(),s[i+1]),s.end());
            s.erase(remove(s.begin(),s.end(),s[i+2]),s.end());

        }
    }

    cout<<s;



}
