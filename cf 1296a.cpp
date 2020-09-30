#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++) {
            int k;
            cin>>k;
            v.push_back(k);
        }
        int odd=0,even=0;
        for(auto k:v) {
            if(k%2==0) {
                even++;
            } else {
                odd++;
            }
        }
        if(odd%2!=0 && odd!=0) {
            cout<<"YES"<<endl;
        } else if(odd%2==0 && odd!=0) {
            if(even!=0) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } else if(odd==0) {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
