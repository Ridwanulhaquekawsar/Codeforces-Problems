#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie()
using ll = long long int;
#define nl '\n'

ll n,s,sum,mx_sz,l;
vector<ll>a;

void solve(){
    cin>>n>>s;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    l=0;
    sum=0;
    mx_sz=0;
    
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        if(sum>s) sum-=a[l++];
        
        if(sum<=s) mx_sz=max(mx_sz,r-l+1);
    }
    
    cout<<mx_sz<<nl;
}

int main(){
    FastIO(); solve();
}
