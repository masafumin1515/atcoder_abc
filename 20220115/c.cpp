#include <bits/stdc++.h>

using namespace std;

const int max_n = 200222, inf = 1000111222;

int n, q, a[max_n];
map< int, vector<int> > all;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        all[a[i]].push_back(i);
    }
    while (q--) {
        int x, k;
        cin >> x >> k;
        if (k > all[x].size()) {
            cout << "-1\n";
        } else {
            cout << all[x][k - 1] + 1 << "\n";
        }
    }
    return 0;
}
