#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, l, r;
ll divisor;

int find_divisor(ll val){
    if(val < 2) return 1;
    
    for(ll i = 2; i*i <= val; i++) if(val % i == 0) return i;
    
    return val; 
}

void solve(){
    cin >> l >> r;
    
    if(l <= 3 && r <= 3) cout << "-1" << nl;
    else if(r-l >= 1){
        if(r % 2) cout << (r-1)/2 << " " << (r-1)/2 << nl;
        else cout << r/2 << " " << r/2 << nl;
    }
    else if(l == r){
        divisor = find_divisor(r);
        
        if(divisor == l) cout << "-1" << nl;
        else cout << divisor << " " << r - divisor << nl;
    }
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}
