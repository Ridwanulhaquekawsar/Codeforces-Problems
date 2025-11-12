#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,x,y,L,R,ans,sum;
vector<ll>a;

void solve(){
    cin>>n>>x>>y;
    a.resize(n);
    
    sum=0;
    for(int i=0; i<n; i++) cin>>a[i],sum+=a[i];
    
    sort(a.begin(),a.end());
    
    ans=0;
    for(int i=0; i<n; i++){
        L=lower_bound(a.begin()+i+1,a.end(),sum-y-a[i])-a.begin();
        R=upper_bound(a.begin()+i+1,a.end(),sum-x-a[i])-a.begin()-1;
        
        if(L<=R) ans+=R-L+1;
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
