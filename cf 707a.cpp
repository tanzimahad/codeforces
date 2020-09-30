#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,count=0;

    char a1[100][100];

    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a1[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a1[i][j]=='C' || a1[i][j]=='Y' || a1[i][j]=='M')
            {
                count++;

                break;
            }
        }
    }

    if(count!=0)
    {
        cout<<"#Color"<<endl;
    }

    else
    {
        cout<<"#Black&White"<<endl;
    }

    return 0;
}
