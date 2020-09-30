#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<7; i++) {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int cnt=0,i=0;
    while(1) {
        n-=v[i];
        cnt++;
        if(n<=0) {
            break;
        }
        if(i==6) {
            i=-1;
        }
        i++;
    }
    if(cnt%7==0){
        cout<<"7"<<endl;
    }
    else{
        int k=cnt/7;
        cout<<cnt-(k*7)<<endl;
    }
}
