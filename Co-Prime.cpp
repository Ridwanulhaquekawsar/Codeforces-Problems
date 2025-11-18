#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, x, n;
vector<vector<ll>>cop(1001);
vector<ll>idx;
ll ans;

void solve(){
    cin >> n;
    idx.assign(1001,0);
    
    for(ll i = 1; i <= n; i++){
        cin >> x;
        idx[x] = i;
    }
    
    ans = -1;
    for(ll i = 1; i <= 1000; i++){
        if(idx[i] == 0) continue;
        
        for(ll j : cop[i]) if(idx[j] != 0) ans=max(ans,idx[i] + idx[j]);
    }
    
    cout << ans << nl;
}

int main(){
    FastIO(); 
    
    for(ll i = 1; i <= 1000; i++){
        for(ll j = 1; j <= 1000; j++){
            if(__gcd(i,j) == 1) cop[i].push_back(j);
        }
    }
    
    cin >> t; while(t--) solve();
}
