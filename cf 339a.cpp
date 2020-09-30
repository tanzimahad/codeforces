#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string s;

    getline(cin,s);

    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    sort(s.begin(),s.end());

    cout<<s[0];

    for(int i=1; i<s.size(); i++)
    {
        cout<<"+"<<s[i];
    }
    return 0;

}
