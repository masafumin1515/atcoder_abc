#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  int num;
  cin >> N;
  vector<long long> h(N);
  
  for (int i = 0; i < N; ++i) cin >> h[i];
  num = 0;
  while(num < N - 1 && h[num] >= h[num+1]) ++num;
  cout << h[num] << endl;
}