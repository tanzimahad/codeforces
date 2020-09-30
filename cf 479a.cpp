#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int a1,b1,c1;
    cin>>a1>>b1>>c1;

    int a,b,c,d,e;

    a=a1+(b1*c1);
    b=a1*(b1+c1);
    c=a1*b1*c1;
    d=(a1+b1)*c1;
    e=(a1*b1)+c1;
    int ans=a1+b1+c1;

    ans=max(ans,a);
    ans=max(ans,b);
    ans=max(ans,c);
    ans=max(ans,d);
    ans=max(ans,e);


    cout<<ans;




}
