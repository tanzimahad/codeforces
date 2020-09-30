#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int x = n/2,count=0;

   for(int i=1; i<=x; i++)
   {
       if(n%i==0)
       {
           count++;
       }
   }

   cout<<count;
}
