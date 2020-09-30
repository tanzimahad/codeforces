#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m;

    vector<pair<int,int>>vec;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        vec.push_back(make_pair(x,i));
    }
    sort(vec.begin(),vec.end());

    cout<<vec[vec.size()-1].second<<endl;

    return 0;
}
