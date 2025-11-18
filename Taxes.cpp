#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;

bool isPrime(ll n){
    if(n==1) return false;
    if(n % 2 == 0) return n == 2;
    
    for(ll i=3; i*i<=n; i++) if(n % i == 0) return false;
    
    return true;
}

void solve(){
    cin>>n;
    
    if(isPrime(n)) cout<<1;
    else if(n % 2 == 0) cout<<2;
    else{
        if(isPrime(n-2)) cout<<2;
        else cout<<3;
    }
}

int main(){
    FastIO(); solve();
}
