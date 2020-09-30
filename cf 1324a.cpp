#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,t;
    cin>>t;
    while(t--) {
        vector<int>v;
        cin>>n>>x;
        while(n--) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int odd=0,even=0;
        for(int i=0; i<v.size(); i++) {
            if(v[i]%2==0) {
                even++;
            } else {
                odd++;
            }
        }
        if(odd==0) {
            cout<<"No"<<endl;
        } else {
            if(x%2!=0) {
                if(odd>=x) {
                    cout<<"Yes"<<endl;
                } else {
                    if(odd % 2!=0) {
                        cout<<"Yes"<<endl;
                    } else {
                        int p = odd-1;
                        if(x-p<=even) {
                            cout<<"Yes"<<endl;
                        } else {
                            cout<<"No"<<endl;
                        }
                    }
                }
            } else {
                if(even==0) {
                    cout<<"No"<<endl;
                } else {
                    if(odd>=x-1) {
                        cout<<"Yes"<<endl;
                    } else {
                        if(odd % 2!=0) {
                            cout<<"Yes"<<endl;
                        } else {
                            int p = odd-1;
                            if(x-p<=even) {
                                cout<<"Yes"<<endl;
                            } else {
                                cout<<"No"<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
