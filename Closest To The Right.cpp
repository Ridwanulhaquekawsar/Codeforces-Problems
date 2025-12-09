#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, k;
vector<ll>v;
ll key;
ll l, r, mid;
ll ans;

void solve(){
    cin >> n >> k;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    
    while(k--){
        cin >> key;
        
        l = 0;
        r = n - 1;
        ans = n;
        
        while(l <= r){
            mid = (r + l)/2;
            
            if(v[mid] >= key){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        
        cout << ans + 1 << nl;
    }
}

int main(){
    FastIO(); solve();
}
