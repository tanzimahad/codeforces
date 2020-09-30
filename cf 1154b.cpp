#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++) {
        int k;
        cin>>k;
        a.push_back(k);
    }
    a.resize(unique(a.begin(),a.end())-a.begin());
    sort(a.begin(),a.end());

    if(a.size()>3) {
        cout<<0;
    } else {
        if(a.size()==0) {
            cout<<0<<endl;
        } else if(a.size()==2) {
            if ((a[1] - a[0]) % 2 == 0) {
                cout << (a[1] - a[0]) / 2 << endl;
            } else {
                cout << a[1] - a[0] << endl;
            }
        } else {
            if (a[1] - a[0] != a[2] - a[1]) {
                cout << -1 << endl;
            } else {
                cout << a[1] - a[0] << endl;
            }
        }
    }
}

