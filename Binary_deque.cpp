#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,s,sum,l,mx;
vector<ll>a;

void solve(){
    cin>>n>>s;
    a.resize(n);
    
    sum=0;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    
    if(sum==s) cout<<0<<nl;
    else if(sum<s) cout<<"-1"<<nl;
    else{
        l=0;
        mx=-1;
        sum=0;
        
        for(int r=0; r<n; r++){
            sum+=a[r];
            
            while(sum>s) sum-=a[l++];
            
            if(sum==s) mx=max(mx,r-l+1);
        }
        
        cout<<n-mx<<nl;
    }
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
