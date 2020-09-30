#include<bits/stdc++.h>
using namespace std;

#define mx 100010

vector<int>graph[mx];
bool visited[mx];

void dfs(int source) {
    visited[source]=1;
    for(int i=0; i<graph[source].size(); i++) {
        int next=graph[source][i];
        if(visited[next]==0) {
            dfs(next);
        }
    }
}

int main() {
    int n,t;
    cin>>n>>t;
    for(int i=1; i<n; i++) {
        int k;
        cin>>k;
        graph[i].push_back(i+k);
    }

    dfs(1);

    if(visited[t]==1) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
