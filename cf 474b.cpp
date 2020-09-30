#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a[1000001];
    cin>>n;
    int index=1,pile=1;
    while(n--) {
        int x;
        cin>>x;
        for(int i=1; i<=x; i++) {
            a[index]=pile;
            index++;
        }
        pile++;
    }
    int m;
    cin>>m;
    while(m--) {
        int m1;
        cin>>m1;
        cout<<a[m1]<<endl;
    }
}
