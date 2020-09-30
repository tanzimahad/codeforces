#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    while(n--) {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int k=0,c=0;
    for(int i=0; i<v.size(); i++) {
        if(v[i]==-1) {
            if(k>0) {
                k--;
            }
            else{
                c++;
            }

        } else {
            k+=v[i];
        }
    }
    cout<<c<<endl;
}
