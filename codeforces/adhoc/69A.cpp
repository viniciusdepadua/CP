//
// Created by vinicius on 11/19/21.
//
//
// Created by vinicius on 11/18/21.
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
    int n;
    cin >> n;
    int i = 0;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    while(i < n){
        int x,y,z;
        cin >> x >> y >> z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
        i++;
    }
    if(!sumx and !sumy and !sumz){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
