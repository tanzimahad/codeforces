#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int r = n;

    for(int i = 1; i <= n; ++i) {
        r += i * (n - i);
    }

    cout << r;
    return 0;
}
