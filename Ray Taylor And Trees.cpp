#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>v, prf_min, suf_max;

void solve(){
    cin >> n;
    v.resize(n);
    prf_min.resize(n);
    suf_max.resize(n);
    
    for(auto &bx : v) cin >> bx;
    
    prf_min[0] = v[0];
    
    for(ll i = 1; i < n; i++){
        prf_min[i] = min(prf_min[i - 1], v[i]);
    }
    
    suf_max[n - 1] = v[n - 1];
    
    for(ll i = n - 2; i >= 0; i--){
        suf_max[i] = max(suf_max[i + 1], v[i]);
    }
    
    
    for(ll i = 0; i < n - 1; i++){
    
        if(prf_min[i] > suf_max[i + 1]){
            cout << "No" << nl;
            return;
        }
    }
    
    cout << "Yes" << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
