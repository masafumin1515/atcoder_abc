#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

void _main() {
  int A, B, ans=0;
  cin >> A >> B;

  bool f1=0, f2=0, f4=0;

  if ((A) == 1) {
    f1 = 1;
  } else if ((A) == 2) {
    f2 = 1;
  } else if ((A) == 3) {
    f1 = 1, f2= 1;
  } else if ((A) == 4) {
    f4 = 1;
  } else if ((A) == 5 ) {
    f1 = 1, f4 = 1;
  } else if ((A) == 6) {
    f2 = 1, f4 =1;
  } else if ((A) == 7) {
    f1 = 1, f2 = 1, f4 = 1;
  }

  if ((B) == 1) {
    f1 = 1;
  } else if ((B) == 2) {
    f2 = 1;
  } else if ((B) == 3) {
    f1 = 1, f2= 1;
  } else if ((B) == 4) {
    f4 = 1;
  } else if ((B) == 5 ) {
    f1 = 1, f4 = 1;
  } else if ((B) == 6) {
    f2 = 1, f4 =1;
  } else if ((B) == 7) {
    f1 = 1, f2 = 1, f4 = 1;
  }

  ans += f1 ? 1 : 0;
  ans += f2 ? 2 : 0;
  ans += f4 ? 4 : 0;

  cout << ans << endl;
}