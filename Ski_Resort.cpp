#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,k,q,l,r,days,ans;
vector<ll>a;

void solve(){
    cin>>n>>k>>q;
    a.clear(),a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    l=0;
    r=0;
    ans=0;
    
    while(r<n){
        if(a[r]<=q){
            days=(r-l+1)-(k-1);
            
            if(days>0) ans+=days;
            r++;
        }
        else{
            r++;
            l=r;
        }
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
