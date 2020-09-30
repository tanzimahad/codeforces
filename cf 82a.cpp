#include<bits/stdc++.h>
using namespace std;

int main() {
    string arr[]= {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin>>n;
    n--;
    while(n>=5) {
        n-=5;
        n/=2;
    }
    cout<<arr[n];
}
