#include <iostream>
#include<cmath>

int main() {
  long long x = 1; 
  long long rtv;
  for (int i = 1; i < 24; ++i){
    x = x * (366 - i);
  }

  rtv = x/pow(365,23);

  printf("%lld", rtv);
}