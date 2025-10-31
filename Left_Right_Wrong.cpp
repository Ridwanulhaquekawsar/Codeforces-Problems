#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,j,l,ans,r;
vector<ll>str,prf_sum;
string s;

void solve(){
    cin>>n;
    prf_sum.clear(),prf_sum.resize(n+1);
    str.clear(),str.resize(n+1);
    
    for(int i=1; i<=n; i++){
        cin>>prf_sum[i];
        prf_sum[i]+=prf_sum[i-1];
    }
    
    cin>>s;
    j=1;
    for(auto &c : s) str[j++]=c;
    
    
    ans=0;
    l=1;
    r=n;
    while(l<r){
        while(l<r && str[l]!='L') l++;
        while(l<r && str[r]!='R') r--;
        
        if(l<r && str[l]=='L' && str[r]=='R') ans+=prf_sum[r]-prf_sum[l-1];
        
        l++;
        r--;
    }
    
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
