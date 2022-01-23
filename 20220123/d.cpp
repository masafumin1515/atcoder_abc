#include <bits/stdc++.h>

using namespace std;

const int n_max = 8, row_max = 16, column_max = 16;

int max_value = 0;
vector< vector<int> > a;
map< int, vector<int> > all;

void func (int tmp_value, set<int> Set_origin, vector< vector<int> >a) {
  int size = Set_origin.size();
  for (int i = 0; i < size - 1; ++i) {
    set<int> Set = Set_origin;

    auto itr_1 = Set.begin();
    Set.erase(itr_1);
    auto itr_2 = Set.begin();
    Set.erase(itr_2);
    tmp_value += a[(*itr_1)][(*itr_2)];

    if (Set.size() == 2) {
      auto itr_1 = Set.begin();
      Set.erase(itr_1);
      auto itr_2 = Set.begin();
      Set.erase(itr_2);
      max_value = max(max_value, tmp_value += a[(*itr_1)][(*itr_2)]);
    } else {
      func(tmp_value, Set, a);
    }
  }

};

int main() {
  int n, tmp_value;
  cin >> n;

  for (int i = 1; i < 2*n; ++i) {
    for (int j = i + 1; j <= 2*n; ++j) {
      cin >> a[i][j];
    };
  };

  set<int> Set;
  for (int i = 1; i <= n; ++i) Set.insert(i);

  func(tmp_value, Set, a);

  cout << max_value << endl;
};