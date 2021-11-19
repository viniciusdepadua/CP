#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
#include <tuple>
using namespace std;
#define _ << ' ' <<
#define pb push_back
#define all(x) begin(x), end(x)
#define mp make_pair
#define f first
#define s second
#define sz(x) int((x).size())
#define each(x,A) for(auto &x: A)
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

using ll = long long;
using db = long double;
using pl = pair<ll,ll>;
using pi = pair<int,int>;
using cd = complex<db>;
using vi = vector<int>;
using vd = vector<db>;
using vl = vector <ll>;


template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

//mt19937_64 mt_rand(chrono::high_resolution_clock::now().time_since_epoch().count());
//uniform_int_distribution<long long> rg(1,1e6);

string aj(int n){
    string u = "";
    for(int i=0; i<n; i++) u+='A';
    u+='B';
    return u;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    ll N;
    cin >> N;
    vector < ll > f;
    f.pb(2); f.pb(3);

    while(1){
        int n = sz(f);
        ll v = f[n-1]+f[n-2];
        if(v<=N) f.pb(v);
        else break;
    }
    int n = sz(f);
    map < pair<ll,int>, bool > sv;

    auto ans = [&](const auto&self, ll V, int i) -> bool{
        if(sv.find(mp(V,i))!=sv.end()) return sv[mp(V,i)];
        if(V==N) return sv[mp(V,i)] = true;
        if(i<0) return sv[mp(V,i)] = false;
        ll u = 1;
        ll d = f[i];
        bool ret = false;
        while(N%(V*u)==0){
            bool re = self(self,V*u,i-1);
            if(re) ret=true;
            if(d < N/(V*u) + 2) u*=d;
            else break;
        }
        return sv[mp(V,i)] = ret;
    };

    bool que = ans(ans,1,n-1);
    if(!que) cout << "IMPOSSIBLE" << endl;
    else{
        ll V = 1;
        string s= "";
        for(int i=n-1; i>=0; i--){
            ll u = 1, e=0;
            ll d = f[i];
            ll ulst = 1, elst=0;
            while(N%(V*u)==0){
                bool re = sv[mp(V*u,i-1)];
                if(re){
                    ulst = u;
                    elst = e;
                }
                if(d < N/(V*u) + 2){
                    u*=d;
                    e++;
                }
                else break;
            }
            V*=ulst;
            for(int j=0; j<elst; j++) s+=aj(i+1);
        }
        cout << s << endl;
    }

}
