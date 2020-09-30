#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll a,b,c,d,x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        ll u=x-a+b,v=y-c+d;
        int flag=0;
        if(u>=x1 && u<=x2 && v>=y1 && v<=y2 &&(x2>x1||a+b==0)&&(y2>y1||c+d==0)) {
            flag=1;
        }
        if(flag==1) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
