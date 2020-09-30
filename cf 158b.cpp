#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int p,all=0,ans=0,i1=0,i2=0,i3=0;

    cin>>p;

    for(int i=0;i<p;i++){

        int t;

        cin>>t;

        if(t==4)ans++;

        else if(t==3)i3++;

        else if(t==2)i2++;

        else if(t==1)i1++;

    }

        ans+=min(i1,i3);

        int y=min(i1,i3);

        i1-=y;

        i3-=y;

        ans+=i2/2;

        i2=i2%2;

        ans+=min(i2,i1/2);

        y=min(i2,i1/2);

        i2-=y;

        i1-=2*y;

    if(i2==1 && i1>=0){

        ans++;

        i2--;

        i1--;

    }

    ans+=ceil(i1/4.0);

    ans+=i3;

    cout<<ans<<"\n";

    return 0;

}
