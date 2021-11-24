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


bool checkR(int a,int i,int j, vector<int>v){
    while(i > j){
        if (v[i] != v[j]){
            if (v[i]!= a && v[j] != a) {
                return false;
            }
            else if (v[i] == a){
                while (v[i] == a && i > j){
                    i--;
                }
            }
            else if (v[j] == a){
                while(v[j] == a && i > j){
                    j++;
                }
            }
        }
        else{
            i--;
            j++;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr (n);
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int i = n-1;
        int j = 0;
        bool palindrome = true;
        while(i > j){
            if(arr[i] != arr[j]){
                palindrome = checkR(arr[i],i-1,j,arr);
                if(!palindrome){
                    palindrome = checkR(arr[j],i,j+1,arr);
                }
                break;
            }
            i--;
            j++;
        }
        string out = palindrome?"YES":"NO";
        cout << out << endl;
        int x;
    }
    return 0;
}