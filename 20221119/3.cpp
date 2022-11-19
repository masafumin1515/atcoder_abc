#include<bits/stdc++.h>
using namespace std;

int N,Q;
vector<int>T,A,B;
// -----------------------------------
int main() {
    cin >> N >> Q;
    T.resize(Q);
    A.resize(Q);
    B.resize(Q);
    for (int i=0; i<Q; ++i) cin >> T[i] >> A[i] >> B[i];
    map<int,set<int> > follower;

    for (int i=0; i<Q; ++i) {
        if (T[i] == 1) follower[B[i]].insert(A[i]);
        else if (T[i] == 2) follower[B[i]].erase(A[i]);
        else if (T[i] == 3) cout << ((follower[B[i]].count(A[i])) && (follower[A[i]].count(B[i]))?"Yes":"No") << endl; 
    }
}