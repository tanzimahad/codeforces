#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k,odd,even;
    cin>>n>>k;
    if(n%2==0) {
        odd=n/2;
    } else {
        odd=(n/2)+1;
    }
    even=n-odd;
    if(k<=odd) {
        cout<<(2*k)-1<<endl;
    } else {
        cout<<(k-odd)*2<<endl;
    }
}
