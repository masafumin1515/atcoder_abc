#include<bits/stdc++.h>
using namespace std;

int N,K;
vector<int> a;
int main() {
    cin >> N >> K;
    for (int i=0; i<N; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i=0; i<K; ++i) a.push_back(0);

    for (int i=0; i<N; ++i) cout << a[K+i] << ' ';
}