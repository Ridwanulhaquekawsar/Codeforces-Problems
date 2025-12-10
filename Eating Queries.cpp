#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, q;
vector<ll>v;
vector<ll>prf_sum;
ll key;
ll ans;

void solve(){
    cin >> n >> q;
    v.resize(n);
    prf_sum.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.rbegin(), v.rend());
    
    prf_sum[0] = v[0];
    for(ll i = 1; i < n; i++) prf_sum[i] = prf_sum[i - 1] + v[i];
    
    while(q--){
        cin >> key;
        ans = -1;
        
        auto it = lower_bound(prf_sum.begin(), prf_sum.end(), key);
        
        if(it != prf_sum.end()) ans = (it - prf_sum.begin()) + 1;
        
        cout << ans << nl;
    }
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
