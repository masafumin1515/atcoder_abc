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
  int X, Y, Z, ans = 0;
  cin >> X >> Y >> Z;

  if (X > 0) {
    if (Y < 0) {
      ans = X;
    } else if (Y > 0) {
      if (Y > X) {
        ans = X;
      } else if (Y < X) {
        if (Z < Y) {
          if (Z > 0) {
            ans = X;
          } else if (Z < 0) {
            ans = 2 * abs(Z) + X;
          }
        } else if (Z > Y) {
          ans = -1;
        }
      }
    }
  } else if (X < 0) {
    if (Y > 0) {
      ans = abs(X);
    } else if (Y < 0) {
      if (Y < X) {
        ans = abs(X);
      } else if (Y > X) {
        if (Z > Y) {
          if (Z < 0) {
            ans = abs(X);
          } else if (Z > 0) {
            ans = 2 * Z + abs(X);
          }
        } else if (Z < Y) {
          ans = -1;
        }
      }
    }
  }

  cout << ans << endl;
}