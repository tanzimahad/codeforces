#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p;
    getline(cin,p);
    int count=0;

    for(int i=0; i<p.size(); i++)
    {
        if(p[i]=='H'|| p[i]=='Q'|| p[i]=='9')
        {
           count++;
        }

    }
    if(count>=1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
