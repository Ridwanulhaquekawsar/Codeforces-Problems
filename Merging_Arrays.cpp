#include<bits/stdc++.h>
using namespace std;

int n,m,l,r; vector<int>a,b;

void solve(){
    cin>>n>>m;
    a.resize(n),b.resize(m);
    
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    
    l=0,r=0;
    while(l<n && r<m){
        cout<<(a[l]<=b[r] ? a[l++] : b[r++])<<" ";
    }
    
    while(l<n) cout<<a[l++]<<" ";
    while(r<m) cout<<b[r++]<<" ";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    solve(); return 0;
}
