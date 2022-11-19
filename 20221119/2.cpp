#include<bits/stdc++.h>
using namespace std;

void solve(int &h, int &m){
    int a,b,c,d;
    a=h/10;
    b=h%10;
    c=m/10;
    d=m%10;
    if ((a==0 || a==1) && (0<=b && b<=5) && (0<=c && c<=5)) return;
    else if ((a==2) && (0<=b && b<=3) && (0<=c && c<=3)) return;
    else {
        if (m==59) {
            m=0;
            if (h==23) h=0;
            else h++;
        } else {
            m++;
        }
    }
    solve(h,m);
}

int main() {
    int h,m;
    cin >> h >> m;
    solve(h,m);
    cout << h/10 << h%10 << ' ' << m/10 << m%10 << endl;
}