#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int count=0;
    for(int i=0; i<v.size(); i++)
    {
        int f=0,s=0,f1=0,s1=0,cnt=0,cnt1=0;
        for(int j=0; j<v.size(); j++)
        {
            if(v[i].first==v[j].first && i!=j)
            {
                if(v[i].second>v[j].second)
                {
                    f++;
                }
                else if(v[i].second<v[j].second)
                {
                    s++;
                }
                if(f>=1 && s>=1)
                {
                    cnt++;
                    break;
                }
            }
        }
        for(int j=0; j<v.size(); j++)
        {
            if(v[i].second==v[j].second && i!=j)
            {
                if(v[i].first>v[j].first)
                {
                    f1++;
                }
                else if(v[i].first<v[j].first)
                {
                    s1++;
                }
                if(f1>=1 && s1>=1)
                {
                    cnt1++;
                    break;
                }
            }
        }
        if(cnt>=1 && cnt1>=1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}


