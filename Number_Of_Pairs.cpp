#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, l, r;
vector<ll>v;
ll ans;

void solve(){
    cin >> n >> l >> r;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    ans = 0;
    
    for(ll i = 0; i < n; i++){
        auto l_idx = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
        auto r_idx = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);
        
        ans += (r_idx - l_idx);
    }
    
    cout << ans << nl;
}

int main(){
    FastIO(); 
    
    cin >> t;
    while(t--) solve();
}
