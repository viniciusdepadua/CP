//
// Created by vinicius on 11/26/21.
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
        int n,l,r,k;
        cin >> n >> l >> r >> k;
        vl v(n);
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v[i] = a;

        }
        sort(v.begin(), v.end());
        int total = 0;
        int price = 0;
        for(int i = 0; i < n; i++){
            if(v[i] >= l && v[i] <= r){

                price+=v[i];
                if(price > k){
                    break;
                }
                else{
                    total++;
                }
            }

        }
        cout << total << endl;

    }
    return 0;
}
