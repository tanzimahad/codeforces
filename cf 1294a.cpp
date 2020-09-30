#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a[10];
        for(int i=0; i<4; i++) {
            cin>>a[i];
        }
        sort(a,a+3);
        int k = a[2],x;
        x=(k-a[0])+(k-a[1]);
        if(x==a[3]) {
            cout<<"YES"<<endl;
        } else {
            x=a[3]-x;
            if(x%3==0 && x>=3) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
}
