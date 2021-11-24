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
    string word;
    char init;
    char end;
    int n;
    cin >> n;
    vector<string> out(n);
    int k = 0;
    cin.ignore(1,'\n');
    while(k<n){
        getline(cin, word);
        init = word[0];
        end = word[word.size()-1];
        if(word.size()>10){
            out[k] = init + to_string(word.size()-2) + end;
        }
        else{
            out[k] = word;
        }
        cout << out[k] << endl;
        k++;
    }

    return 0;
}
