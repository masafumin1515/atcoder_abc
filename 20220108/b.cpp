# include <iostream>
# include <vector>
# include <cmath>
# include <iomanip>
# include <limits>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> x(N), y(N);
  for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];

  double tmp, result;

  result = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      tmp = sqrt(pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0));
      if (tmp > result) {
        result = tmp;
      };
    };
  };

  cout << fixed << setprecision(10) << result << endl;
};  