//
// Created by vinicius on 11/23/21.
//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include <tuple>
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
        ll m,n,out;
        cin >> m >> n;
        out = 2;
        if(m==1 && n == 1) {
            out = 0;
        }
        else if(m==1 || n == 1){
            out = m==1?m:n;
        }
        cout << out << endl;

    }
    return 0;
}
