#include<bits/stdc++.h>
#include<string>
#include <algorithm>
using namespace std;

int main()
{

    int n,y=0;
    cin>>n;

    int count=0;

    string s;

    for(int i=0; i<=n; i++)
    {
        getline(cin,s);

        if(s=="Tetrahedron")
        {
            count=4;
        }
        else if(s=="Cube")
        {
            count=6;
        }
        else if(s=="Octahedron")
        {
            count=8;
        }
        else  if(s=="Dodecahedron")
        {
            count=12;
        }
        else  if(s=="Icosahedron")
        {
            count=20;
        }

        y=y+count;

    }

    cout<<y;

    return 0;
}



