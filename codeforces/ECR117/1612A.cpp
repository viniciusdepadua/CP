//
// Created by vinicius on 11/22/21.
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
    for(int i = 0; i < t; i++){
        int xb, yb;
        cin >> xb >> yb;
        int yc = -1;
        int xc = -1;
        if((xb + yb)%2 == 0){
            xc = xb>yb?(xb + yb) / 2:0;
            yc = xb<=yb?(xb + yb) / 2:0;
        }
        cout << xc <<" " << yc << endl;
    }
    return 0;
}