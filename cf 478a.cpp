#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5],ans=0;
    for(int i=0; i<5; i++) {
        cin>>a[i];
        ans+=a[i];
    }
    if(ans%5!=0) {
        cout<<-1<<endl;
    } else {
        if(ans/5!=0) {
            cout<<ans/5<<endl;

        } else {
            cout<<-1<<endl;
        }
     }
}
