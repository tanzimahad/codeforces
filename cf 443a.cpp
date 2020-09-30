#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin,s1);
    cout<<s1.size()<<endl;
    set<char>s;
    for(int i=0; i<s1.size(); i++) {
        if(s1[i]>='a'&& s1[i]<='z') {
            s.insert(s1[i]);
        }
    }
    cout<<s.size()<<endl;
}


