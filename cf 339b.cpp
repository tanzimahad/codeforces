#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    int it = *min_element(v.begin(),v.end());
    int index;
    for(int i=0; i<v.size(); i++){
        if(it==v[i]){
            index=i;
            break;
        }
    }
    int cnt=2;
    for(int i= index; i<v.size(); i++){
        if(v[i]>=index){
            cnt++;
        }
    }
}
