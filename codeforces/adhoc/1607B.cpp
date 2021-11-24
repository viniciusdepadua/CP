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
        ll n;
        ll x0;
        ll out;
        cin >> x0;
        cin >> n;
        if(x0%2 == 0) {
            if (!(n % 4)) {
                out = x0;
            }
            else if (n % 4 == 1) {
                out = x0 - n;
            }
            else if (n%4 == 2){
                out = +1 + x0;
            }
            else{
                out = n+1+x0;
            }
        }
        else{
            if (!(n % 4)) {
                out = x0;
            }
            else if (n % 4 == 1) {
                out = x0 + n;
            }
            else if (n%4 == 2){
                out = -1 + x0;
            }
            else{
                out = -n-1+x0;
            }
        }
        cout << out << endl;
        k++;
    }
    return 0;
}