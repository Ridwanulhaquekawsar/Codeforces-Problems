#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, k;
vector<ll>v;
ll key;
ll mid;
bool ok;
ll l, r;

void solve(){
    cin >> n >> k;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    
    while(k--){
        cin >> key;
        
        l = 0;
        r = n - 1;
        ok = 0;
        
        while(l <= r){
            mid = (l + r)/2;
            
            if(key == v[mid]){
                ok = 1;
                break;
            }
            else if(key < v[mid]) r = mid - 1;
            else l = mid + 1;
        }
        
        cout << (ok ? "YES" : "NO") << nl;
    }
}

int main(){
    FastIO(); solve();
}
