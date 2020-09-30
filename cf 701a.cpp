#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,k=1,p;

    vector< pair<int, int> >vec;

    cin>>n;

    p = n;

    while(p--)
    {
        cin>>x;

        vec.push_back( make_pair(x,k));

        k++;
    }

    sort(vec.begin(),vec.end());

    int q = n/2;

    for(int i=0; i<q; i++)
    {

        cout<<vec[i].second<<" "<<vec[n-1].second<<endl;

        n--;
    }

    return 0;
}
