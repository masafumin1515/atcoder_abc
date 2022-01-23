#include <bits/stdc++.h>
using namespace std;

int func(int x, int y, int z) {
  string rtv;

  rtv.push_back('0' + x);
  rtv.push_back('0' + y);
  rtv.push_back('0' + z);

  return stoi(rtv);
}

int main() {
  int input;
  int x, y, z;
  cin >> input;

  x = input / 100;
  y = input % 100 / 10;
  z = input % 100 % 10;

  cout << func(x, y, z) + func(y, z, x) + func(z, x, y) << endl;
}