#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vp.emplace_back(x, y);
    }

    
    sort(vp.begin(), vp.end());

    
    for (int i = 0; i < n; i++) {
        if (s > vp[i].first) {
            s += vp[i].second;  
        } else {
            cout << "NO" << endl;
            return 0;  
        }
    }

    cout << "YES" << endl;  
    return 0;
}
