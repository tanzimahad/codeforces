#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++) {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int a=v[0],b=v[0];
    bool flag=true;
    for(int i=1; i<v.size(); i++) {
        if(v[i]<v[i-1]) {
            swap(v[i],v[i-1]);
            a=v[i];
            b=v[i-1];
        }
    }
    for(int i=1; i<v.size(); i++) {
        if(v[i]<v[i-1]) {
            flag=false;
        }
    }
    if(flag==true) {
      cout<<"yes"<<endl<<a<<" "<<b;
    }
    else{
        cout<<"no"<<endl;
    }
}
