#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, k;
vector<ll>v;
ll l, r;
ll key;
ll ans;
ll mid;

void solve(){
    cin >> n >> k;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    
    while(k--){
        cin >> key;
        
        l = 0;
        r = n - 1;
        ans = -1;
        
        while(l <= r){
            mid = (l + r)/2;
            
            if(v[mid] <= key){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        
        cout << ans + 1 << nl;
    }
}

int main(){
    FastIO(); solve();
}
