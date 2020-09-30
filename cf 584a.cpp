#include<bits/stdc++.h>
using namespace std;

int funt(int n) {
    int cnt=0;
    while(n>0) {
        n/=10;
        cnt++;
    }
    return cnt;
}

int main() {
    long long int n,t;
    cin>>n>>t;
    int k=funt(t);
    if(k>n) {
        cout<<"-1"<<endl;
    } else {
        cout<<t;
        n=n-k;
        while(n--) {
            cout<<"0";
        }
    }
}
