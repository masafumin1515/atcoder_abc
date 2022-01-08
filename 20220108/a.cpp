# include <iostream>
# include <vector>
using namespace std;

int f(int t) {
  return t*t + 2*t + 3;
};

int main() {
  int t, result;
  cin >> t;

  result = f(f(f(t)+t) + f(f(t)));

  cout << result << endl;
};