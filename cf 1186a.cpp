#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a =min(m,k);
    if(a>=n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
