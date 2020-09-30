#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int q;

    string s;

    cin>>q>>s;

    int n=s.size();

    for(int i=0; i<n; i++)
    {

        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                for(int k=j; k<n; k++)
                {
                    s[k]=s[k+1];
                }

                n--;
                j--;

            }
        }
    }

    if(n==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;

}
