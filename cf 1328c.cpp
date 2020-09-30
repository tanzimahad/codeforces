#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;cin>>n;
        string x;
        cin>>x;
        vector<int>v1,v2;
        bool flag=true;
        for(int i=0; i<x.size(); i++) {
            if(x[i]=='2') {
                if(flag==true) {
                    v1.push_back(1);
                    v2.push_back(1);
                } else {
                    v1.push_back(0);
                    v2.push_back(2);
                }

            } else if(x[i]=='0') {
                v1.push_back(0);
                v2.push_back(0);
            } else if(x[i]=='1') {
                if(flag==true) {
                    v1.push_back(1);
                    v2.push_back(0);
                    flag=false;
                } else {
                    v1.push_back(0);
                    v2.push_back(1);
                }
            }
        }
        for(auto k:v1) {
            cout<<k;
        }
        cout<<endl;
        for(auto k2:v2) {
            cout<<k2;
        }
        cout<<endl;

    }

}
