#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> t;
    vector<int> c(m);

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        t.insert(price);
    }

    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < m; i++) {
        int max_price = c[i];

        auto it = t.upper_bound(max_price);
        if (it == t.begin()) {
            cout << -1 << endl;
        } else {
            --it;  
            cout << *it << endl;
            t.erase(it);  
        }
    }

    return 0;
}
