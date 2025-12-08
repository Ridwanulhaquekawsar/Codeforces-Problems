#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a, b;
ll cntA, cntB;

void solve(){
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) cin >> b[i];
    
    for(ll bt = 30; bt >= 0; bt--){
        
        cntA = 0;
        cntB = 0;
        
        for(ll i = 1; i <= n; i++){
        
            if(a[i] & (1LL << bt) ) cntA++;
            if(b[i] & (1LL << bt) ) cntB++;
        }
        
        if(cntA % 2 == cntB % 2) continue;
        
        for(ll i = n; i >= 1; i--){
        
            if( (a[i] & (1LL << bt)) != (b[i] & (1LL << bt)) ){
            
                if(i % 2) cout << "Ajisai" << nl;
                else cout << "Mai" << nl;
                
                return;
            }
        }
    }
    
    cout << "Tie" << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}


~ Another Approach:👇

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a, b;
ll xorA, xorB;
ll currentA, currentB;

void solve(){
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    
    xorA = 0;
    xorB = 0;
    
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        xorA ^= a[i];
    }
    
    for(ll i = 1; i <= n; i++){
        cin >> b[i];
        xorB ^= b[i];
    }
    
    for(ll i = 1; i <= n; i++){
        currentA = xorA;
        currentB = xorB;
        
        currentA ^= a[i];
        currentB ^= b[i];
        
        currentA ^= b[i];
        currentB ^= a[i];
        
        if(i % 2){
            if(currentA > currentB){
                xorA = currentA;
                xorB = currentB;
            }
        }
        else{
            if(currentB > currentA){
                xorB = currentB;
                xorA = currentA;
            }
        }
    }
    
    if(xorA == xorB) cout << "Tie" << nl;
    else if(xorA > xorB) cout << "Ajisai" << nl;
    else cout << "Mai" << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
