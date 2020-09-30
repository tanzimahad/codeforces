#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int cnt_0=0, cnt_1=0,n;

    cin>>n>>s ;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            cnt_0++;
        }
        else
        {
            cnt_1++;
        }
    }

   if(cnt_0 > cnt_1)
   {
       cout<<cnt_0 - cnt_1<<endl;
   }

   else
   {
       cout<<cnt_1 - cnt_0<<endl;
   }

    return 0;
}
