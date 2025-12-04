#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, a, b;
ll aBit, bBit;
vector<ll>box;
ll mxBit;
ll i_val;

void solve(){
    cin >> a >> b;
    box.clear();
    
    aBit = __lg(a);
    bBit = __lg(b);
    
    if(a == b){
        cout << 0 << nl;
        return;
    }
    
    if(bBit > aBit) cout << - 1 << nl;
    else{
        mxBit = max(aBit, bBit);
        
        for(ll i = 0; i <= mxBit; i++){
            
            i_val = 1ll << i;
            
            if(a & i_val){
                if( (b & i_val) == 0 ) box.push_back(i_val);
            }
            else if(b & i_val){
                if( (a & i_val) == 0) box.push_back(i_val);
            }
        }
        
        cout << box.size() << nl;
        
        for(auto &x : box) cout << x << " ";
        cout << nl;
    }
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
