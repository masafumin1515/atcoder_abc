# include <iostream>
# include <vector>
# include <cmath>
# include <iomanip>
# include <limits>
# include <sstream>
# include <bitset> 
# include <stdlib.h>

using namespace std;

string convert(long long x){
  string res;
  string r;
  while(x>0){
    res.push_back('0'+(x%2));
    x/=2;
  }
  reverse(res.begin(),res.end());
  return res;
}

void output(string s){
  for(auto &nx : s){
    if(nx=='1'){cout << '2';}
    else{cout << '0';}
  }
  cout << '\n';
}

int main(){
  long long k;
  cin >> k;
  output(convert(k));
  return 0;
}
