#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n;
vector<ll>a;
bool ok;
ll G1,G2;
ll ans;

void solve(){
    cin>>n;
    a.resize(n);
    
    for(auto &bx : a) cin>>bx;
    
    G1=0;
    for(ll i=0; i<n; i+=2) G1 = __gcd(G1,a[i]);
    
    G2=0;
    for(ll i=1; i<n; i+=2) G2 = __gcd(G2,a[i]);
    
    ok=true;
    for(ll i=1; i<n; i+=2){
        if(a[i] % G1 == 0){
            ok=false;
            break;
        }    
    }
    
    ans=0;
    
    if(ok) ans=G1;
    else{
        ok=true;
        for(ll i=0; i<n; i+=2){
            if(a[i] % G2 == 0){
                ok=false;
                break;
            } 
        }
        if(ok) ans=G2;
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
