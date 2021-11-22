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
        int n, a,b;
        cin >> n >> a >> b;
        if(a > b){
            if((a - b) == 1 && a == n/2+1){
                for(int i = n; i >= 1; i--){
                    cout << i << " ";
                }
                cout << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
        else if(b-1>=n/2 && a<=n/2){
            for(int i = n; i >= 1; i--){
                if(i == a){
                    cout << b << " ";
                }
                else if(i == b){
                    cout << a << " ";
                }
                else{
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
