#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,s,l,sum,cnt;
vector<ll>a;

void solve(){
    cin>>n>>s;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    l=0;
    sum=0;
    cnt=0;
    
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        while(sum>s) sum-=a[l++];
        
        if(sum<=s) cnt+=(r-l+1);
    }
    
    cout<<cnt<<nl;
}

int main(){
    FastIO(); solve();
}
