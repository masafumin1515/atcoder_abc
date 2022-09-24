#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph = vector<vector<int> >;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

void _main() {
    // 頂点数と辺数
  int N, X, Y; cin >> N >> X >> Y;

  // グラフ入力受取 (ここでは無向グラフを想定)
  Graph G(N);
  for (int i = 0; i < N-1; ++i) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // BFS のためのデータ構造
  vector<int> prev_v(N-1, -1);
  vector<bool> seen(N-1, 0);
  queue<int> que, que_ans;
  Graph arr_ans;

  seen[X] = 1;
  que.push(X);

  bool finished = 0;
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (int nv : G[v]) {
      if (seen[nv] == 1) continue; // すでに発見済みの頂点は探索しない

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      seen[nv] = 1;
      prev_v[nv] = v;
      if (nv == Y) {
        finished = 1;
        break;
      } else {
        que.push(nv);
      }
    }

    if (finished) break;
  }

  bool finished2 = 0;
  que_ans.push(Y);
  while(!que_ans.empty()) {
    int v = que_ans.front(); // キューから先頭頂点を取り出す
    que_ans.pop();
    
    for (int nv : G[v]) {
      arr_ans[0].insert(arr_ans[0].begin(), nv);
      if (nv == X) {
        finished2 = 1;
        break;
      } else {
        que.push(nv);
      }
    }
    if (finished) break;
  }

  rep(i, 0, arr_ans[0].size()) {
    cout << arr_ans[0][i] << ' ';
  }
  cout << endl;
}