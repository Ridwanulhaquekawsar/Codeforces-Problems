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
ll n;
string s;
ll cnt1, cnt0;
vll ans;
vll idx1, idx0;

void solve(){
    in n >> s;
    ans.clear();
    idx1.clear();
    idx0.clear();
    
    cnt1 = 0;
    cnt0 = 0;
    
    rep(i, n){
    
        if(s[i] == '1'){
        
            cnt1++;
            idx1.pb(i);
        }
        else{
        
            cnt0++;
            idx0.pb(i);
        }
    }
    
    rep(i, idx0.size()){
        
        if(idx0[i] > cnt0 - 1) ans.pb(idx0[i] + 1);
    }
    
    rep(i, idx1.size()){
        
        if(idx1[i] < n - cnt1) ans.pb(idx1[i] + 1);
    }
    
    sort(all(ans));
    
    if(ans.size() == 0){
    
        out(0);
        return;
    }
    
    out(1);
    cout << ans.size() << " ";
    
    rep(i, ans.size()) cout << ans[i] << " ";
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}
