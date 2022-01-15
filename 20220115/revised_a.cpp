/* 
  足りなかった知識：
    - 1111といった整数入力の各桁の数字をそれぞれchar型で受け取れること
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  char a, b, c;
  cin >> a >> b >> c;
  string abc = string({a, b, c});
  string bca = string({b, c, a});
  string cab = string({c, a, b});
  int ans = stoi(abc) + stoi(bca) + stoi(bca);
  cout << ans << endl;
}