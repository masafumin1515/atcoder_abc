#include <bits/stdc++.h>
using namespace std;

int main () {
  int a, b;
  string s, rtv;
  cin >> s;
  cin >> a >> b;

  swap(s[a-1], s[b-1]);

  cout << s << endl;
}