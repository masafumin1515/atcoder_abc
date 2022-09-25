#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

void _main() {
  int A, B, ans=0;
  int score[3] = { 1, 2, 4 };
  cin >> A >> B;

  int bit_flag = A|B;
  rep(i, 0, 3) if(bit_flag & 1<<i) ans += score[i];

  cout << ans << endl;
}