#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define rs(v, n) (v).resize(n)
#define as(v, n) (v).assign(n, 0)

#define pll pair<ll, ll>
#define vll vector<ll>

#define st set<ll>
#define ml multiset<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n, k;
vll v;
ll c;

void solve(){
    in n >> k;
    rs(v, n + 1);
    
    rep1(i, 1, n) in v[i];
    
    c = 0;
    
    if(is_sorted(all(v)) ){
        out(0);
        return;
    }
    
    rep1(i, 1, n){
        
        if( (v[i] - i) % k ) c++;
    }
    
    c == 0  ? out(0) : (c > 2 ? out(-1) : out(1) );
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}
