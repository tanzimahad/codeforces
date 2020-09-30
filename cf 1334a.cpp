#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin>>t;

    while(t--) {
        vector<pair<int,int>>v;
        cin>>n;
        bool flag = true;
        for(int i=0; i<n; i++) {
            int m1,n1;
            cin>>m1>>n1;
            if(n1>m1) {
                flag=false;
            }
            v.push_back(make_pair(m1,n1));
        }
        for(int i=1; i<v.size(); i++) {
            if(v[i-1].first>v[i].first || v[i-1].second>v[i].second) {
                flag=false;
            } else if(v[i-1].second<v[i].second && v[i-1].first==v[i].first) {
                flag=false;
            } else if(v[i-1].first<v[i].first || v[i-1].second<v[i].second) {
                if(v[i].first-v[i-1].first < v[i].second-v[i-1].second) {
                    flag=false;
                }
            }
        }
        if(flag==true) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
