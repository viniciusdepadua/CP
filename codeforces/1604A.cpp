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
    int t;
    cin >> t;
    int k = 0;
    while(k < t){
        int n;
        cin >> n;
        int i = 1;
        ll opr = 0;
        while(i <= n){
            ll ai;
            cin >> ai;
            if(i < ai){
                opr += ai-i;
                n += ai-i;
                i = ai;
            }
            i++;
        }
        cout << opr << endl;
        k++;
    }
    return 0;
}