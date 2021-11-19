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

int main(){
    ios::sync_with_stdio(false);
    #ifndef NEAL_DEBUG
    cin.tie(nullptr);
    #endif
    int w;
    cin >> w;
    if(w == 2){
        cout << "NO";
    }
    else if(!(w%2)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}