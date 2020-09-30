#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int k = n/2 + n%2;
    int flag=0;
    while(k<=n) {
        if(k%m==0) {
            flag=1;
            break;
        }
        k++;
    }
    if(flag==0) {
        cout<<"-1"<<endl;
    } else {
        cout<<k<<endl;
    }
}
