#include<bits/stdc++.h>
using namespace std;

int N,Q;
int value;
int cnt[201010][201010];
vector<int> a;
// ---------------------------------
int main() {
    cin >> N;
    a.resize(N);
    for (int i=0; i<N; ++i) cin >> a[i];
    cin >> Q;

    for (int i=0; i<Q; ++i) {
        string S; getline(cin, S);
        bool flag=false;
        if ((int)S[0] == 1) {
            value=(int)S[2];
            flag=true;
        } else if ((int)S[0] == 2) {
            // cnt[(int)S[2]]=cnt[(int)S[2]-1]+(int)S[4];
            flag=false;
        } else if ((int)S[0] == 3) {

            cout << a[(int)S[2]] << endl;
        }
    }
}