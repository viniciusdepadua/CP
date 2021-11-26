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
        int n;
        cin >> n;
        multimap<int,int> m;
        vl ans(n);
        for(int i = 0; i < n; i++){
            ll a;
            cin >> a;
            m.insert(pair<ll,int>(-a,i));
        }
        ll positive = 1;
        ll negative = -1;
        int k = 0;
        unsigned long long t = 0;
        for(auto i = m.begin(); i!= m.end(); i++){
            if(k%2 == 0){
                ans[i->second] = positive;
                t+=(unsigned long long) (abs(2 * positive * i->first));
                positive++;
            }
            else{
                ans[i->second] = negative;
                t+=(unsigned long long) (abs(2 * negative * i->first));
                negative--;
            }
            k++;
        }
        cout << t << endl;
        cout << 0 << " ";
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";

        }
        cout << endl;
    }
    return 0;
}
