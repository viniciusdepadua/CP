//
// Created by vinicius on 11/25/21.
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
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << "0" << endl;
        }
        else{
            bool even = false;
            bool flag = false;
            n = n/10;
            while(n!=0){
                if( (n%10)%2 == 0){
                    int last_even = n%10;
                    if(n == last_even){
                        cout << "1" << endl;
                        flag = true;
                    }
                    even = true;
                }
                n = n/10;
            }
            if(!even && !flag){
                cout << "-1"<< endl;
            }
            else if(!flag){
                cout << "2" << endl;
            }


        }
    }
    return 0;
}