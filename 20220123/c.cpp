#include <bits/stdc++.h>

using namespace std;

const int max_n = 100000, max_m = 100000;

int n, m;
string s[max_n], t[max_m];
map< string, string > all;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
    all[s[i]] = "No";
  }

  for (int i = 0; i < m; ++i) {
    cin >> t[i];
    if (all[t[i]] == "No") {
      all[t[i]] = "Yes";
    } else {
      continue;
    }
  }

  for (int i = 0; i < n; ++i) cout << all[s[i]] << endl;
}