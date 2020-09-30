#include<bits/stdc++.h>
using namespace std;

vector<string>str;

void subString(string s, int n,int sb_size) {
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            for (int k = i; k <= j; k++){
                if(s[k].size()==sb_size){
                    str.push_back(s[k]);
                }
            }
                //cout << s[k];
        }
    }
}
int main() {
    string sa,sb;
    cin>>sa>>sb;

    subString(sa, sa.size(),sb.size());

    for(auto k: str)
        cout<<k<<endl;
}


