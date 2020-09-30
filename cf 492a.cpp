#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0,i=1,s=0,p=0;

    cin>>n;

    while(1)
    {
        s+=i;

        p+=s;

        if(p>n)
        {
            break;
        }

        count++;

        i++;
    }

    cout<<count<<endl;
}
