#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,mx,l,r,cnt;
vector<ll>a;

void solve(){
    cin>>n;
    a.clear(),a.resize(n);
    
    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());
    
    mx=0;
    
    for(int sum=2; sum<=n*2; sum++){
        l=0;
        r=n-1;
        cnt=0;
        
        while(l<r){
            if(a[l]+a[r]==sum) cnt++,l++,r--;
            else if(a[l]+a[r]<sum) l++;
            else r--;
        }
        
        mx=max(mx,cnt);
    }
    
    cout<<mx<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
