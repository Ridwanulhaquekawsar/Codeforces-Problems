#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,q,l,r,ans; vector<ll>a,d;

void solve(){
    cin>>n>>q;
    a.resize(n+1),d.resize(n+2);
    
    for(int i=1; i<=n; i++) cin>>a[i];
    
    while(q--){
        cin>>l>>r;
        
        d[l]++,d[r+1]--;
    }
    
    for(int i=1; i<d.size(); i++) d[i]=d[i-1]+d[i];
    
    sort(a.begin()+1,a.end(),greater<ll>());
    sort(d.begin()+1,d.end(),greater<ll>());
    
    for(int i=1; i<a.size(); i++) ans+=a[i]*d[i];
    
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    solve(); return 0;
}
