#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,k,l,sum,mx;
vector<ll>a,h;

void solve(){
    cin>>n>>k;
    a.resize(n),h.resize(n);
    
    for(auto &bx : a) cin>>bx;
    for(auto &bx : h) cin>>bx;
    
    l=0;
    sum=0;
    mx=0;
    
    for(int r=0; r<n; r++){
        if(r>0 && h[r-1]%h[r]!=0){
            l=r;
            sum=0;
        }
        
        sum+=a[r];
        
        while(sum>k) sum-=a[l++];
        
        mx=max(mx,r-l+1);
    }
    
    cout<<mx<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
