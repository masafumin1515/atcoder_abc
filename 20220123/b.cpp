#include <bits/stdc++.h>

using namespace std;

const int max_n = 400000;

int N, a[max_n], rtv;
map< int, int > all;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  for (int i = 1; i < 4*N; ++i) {
    cin >> a[i];
    ++all[a[i]];
  }

  for (int i = 1; i < N+1; ++i) {
    if (all[i] == 3) {
      rtv = i;
      break;
    } else {
      continue;
    }
  }

  cout << rtv << endl;
}