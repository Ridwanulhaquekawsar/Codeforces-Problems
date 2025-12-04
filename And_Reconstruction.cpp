#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>b;
vector< vector<ll> >v;
ll ans;

void solve(){
    cin >> n;
    b.resize(n - 1);
    v.assign(n, vector<ll>(30, 0));
    
    for(auto &bx : b) cin >> bx;
    
    for(ll i = 29; i >= 0; i--){
        if(b[0] & (1ll << i)){
            v[0][i] = 1;
            v[1][i] = 1;
        }
    }
    
    for(ll i = 1; i < n - 1; i++){
    
        for(ll j = 29; j >= 0; j--){
        
            if(b[i] & (1ll << j) ){
            
                if(v[i][j] == -1){
                    cout << -1 <<nl;
                    return;
                }
                
                v[i][j] = 1;
                v[i + 1][j] = 1;
            }
        }
        
        for(ll j = 29; j >= 0; j--){
        
            if(v[i][j] == 1 && v[i + 1][j] != 1){
                v[i + 1][j] = -1;
            }    
        }
    }
    
    
    for(ll i = 0; i < n; i++){
        ans = 0;
        
        for(ll j = 0; j < 30; j++){
            if(v[i][j] == 1) ans |= (1ll << j);
        }
        
        cout << ans << " ";
    }
    
    cout << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
