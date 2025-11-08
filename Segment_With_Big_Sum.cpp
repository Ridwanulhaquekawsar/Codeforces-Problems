#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,k,sum,ans,l;
vector<ll>a;

void solve(){
    cin>>n>>k;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    sum=0;
    ans=LLONG_MAX;
    l=0;
    
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        while(sum-a[l]>=k) sum-=a[l++];
        
        if(sum>=k) ans=min(ans,r-l+1);
    }
    
    cout<<(ans==LLONG_MAX ? -1 : ans)<<nl;
}

int main(){
    FastIO(); solve();
}
