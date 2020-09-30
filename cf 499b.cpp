#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string,string>>s;
    int n,m;
    cin>>n>>m;
    while(m--) {
        string s1,s2;
        cin>>s1>>s2;
        s.push_back(make_pair(s1,s2));
    }
    vector<string>st;
    while(n--) {
        string str;
        cin>>str;
        st.push_back(str);
    }
    for(int i=0; i<st.size(); i++){
        for(int j=0; j<s.size(); j++){
            if(st[i]==s[j].first){
                if(s[j].first.size()<=s[j].second.size()){
                    cout<<s[j].first<<" ";
                }
                else{
                    cout<<s[j].second<<" ";
                }
            }
        }
    }
}
