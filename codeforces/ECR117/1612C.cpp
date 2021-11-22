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
    while(t--){
        ll k,x;
        cin >> k >> x;
        ll emotes_complete = k * k;
        ll completes = x >= emotes_complete;
        ll total = 0;
        total += completes * (2*k-1);
        if (!completes){
            if (x <= k * (k+1)/2){
                total+= ll(ceil((-1+ sqrt(1+8*x))/2));
            }
            else{
                total += k;
                x = x - k * (k+1)/2;
                total+= ll(ceil(((2 * k - 1)- sqrt((2 * k -1) * (2 * k - 1) - 8*x))/2));
            }
        }
        cout << total << endl;
    }
    return 0;
}
