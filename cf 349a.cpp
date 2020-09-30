#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    while(n--) {
//        int k;
//        cin>>k;
        v.push_back(25);
    }
    int k=0;
    for(int i=0; i<v.size(); i++) {
       int x=(v[i]-25);
       if(k>=x){
        k+=25-x;
       }
       else{
        cout<<"NO"<<endl;
        return 0;
       }
    }
    cout<<"YES";
}
