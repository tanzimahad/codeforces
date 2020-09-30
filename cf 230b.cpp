#include<bits/stdc++.h>
#define M 1000000
#define ll long long
using namespace std;

vector<int>primes;
bitset<M>marked;

bool is_prime(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    if(!marked[i]) return true;
}

void seive() {
    for(int i=3; i*i<=M; i+=2) {
        if(marked[i]==false) {
            for(int j=i*i; j<=M; j+=i+i) {
                marked[j]=true;
            }
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,t;
    cin>>t;

    seive();

    while(t--) {
        cin>>n;
        if((int)sqrt(n)-sqrt(n)!=0) {
            cout<<"NO"<<endl;
        } else {
            if(is_prime(sqrt(n))) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
}

