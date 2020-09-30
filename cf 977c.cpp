#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x; cin>>n>>x;
    vector<int>v;
    for(int i=0; i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    if(v[x-1]!=v[x]){
        cout<<v[x-1]<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

}
