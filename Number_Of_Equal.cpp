#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,m,l,r,curr,cnt1,cnt2,ans; vector<ll>a,b;

void solve(){
    cin>>n>>m;
    a.resize(n),b.resize(m);
    
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    
    l=0,r=0,ans=0;
    while(l<n && r<m){
        curr=a[l],cnt1=0,cnt2=0;
        
        while(l<n && a[l]==curr) cnt1++,l++;
        while(r<m && curr>b[r]) r++;
        while(r<m && b[r]==curr) cnt2++,r++;
        
        ans+=(cnt1*cnt2);
    }
    
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    solve(); return 0;
}
