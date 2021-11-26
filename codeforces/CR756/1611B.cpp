//
// Created by vinicius on 11/25/21.
//
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double;
using pl = pair<ll,ll>;
using pi = pair<int,int>;
using cd = complex<db>;
using vi = vector<int>;
using vd = vector<db>;
using vl = vector <ll>;

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int max = (a+b)>>2;
        int ans = min(max,min(a,b));
        cout << ans << endl;
    }
    return 0;
}
