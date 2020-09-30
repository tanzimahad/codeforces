#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>>v,vec,vec1;

    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int flag = 0;
    for(int i=0; i<n; i++) {
        if(v[i].first<s) {
            vec.push_back(make_pair(v[i].second,v[i].first));
            flag = 1;
        } else if(v[i].first==s) {
            vec1.push_back(make_pair(v[i].second,v[i].first));
            flag=1;
        }
    }
    if(vec1.size()==n) {
        sort(vec1.begin(),vec1.end());
        if(vec1[0].first==0) {
            cout<<"0"<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    } else {
        sort(vec.begin(),vec.end());
        int k=0;
        if(flag==0) {
            cout<<"-1"<<endl;
        } else {
            for(int i=0; i<vec.size(); i++) {
                if(vec[i].first>k) {
                    k=100-vec[i].first;
                    break;
                }
            }
            cout<<k<<endl;
        }
    }
}

