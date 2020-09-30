#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a1;

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a1.push_back(a);
    a1.push_back(b);
    a1.push_back(c);
    a1.push_back(d);

    sort(a1.begin(),a1.end());

    int x = a1.size()-1;

   for(int i=0;i<a1.size()-1;i++)
   {
       cout<<a1[x]-a1[i]<<" ";
   }

}
