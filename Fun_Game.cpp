#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll T, n;
string s, t;
ll pos;
bool ok;

void solve(){
    cin >> n >> s >> t;
    
    if(s == t){
        cout << "Yes" << nl;
        return;
    }
    
    pos = -1;
    
    for(ll i = 0; i < n; i++){
        if(s[i] == '1'){
            pos = i;
            break;
        }
    }
    
    ok = 1;
    
    if(pos != -1){
        for(ll i = 0; i < n; i++){
            if(s[i] != t[i]){
                if(i < pos) ok = 0;
                break;
            }
        }
        
        if(ok) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    else cout << "No" << nl;
}

int main(){
    FastIO();
    
    cin >> T;
    while(T--) solve();
}
