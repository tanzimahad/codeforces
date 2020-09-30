#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<int>vec(n+1);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        vec[x]++;

    }
    int cnt=0,i,j;
    for( i=0; i<n; i++){
        for( j=0; j<i; j++){
            if(v[i]==v[j]){
                break;
            }
        }
        if(i==j){
            cnt++;
        }
    }
    int k = *max_element(vec.begin(),vec.end());

    cout<<k<<" "<<cnt<<endl;
}
