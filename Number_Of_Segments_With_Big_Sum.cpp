#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,s,sum,cnt,l;
vector<ll>a;
bool flag;

void solve(){
    cin>>n>>s;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    cnt=0;
    l=0;
    flag=true;
    sum=0;
    
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        while(sum>=s){
            cnt+=(n-r);
            
            sum-=a[l++];
        }
    }
    
    cout<<cnt<<nl;
}

int main(){
    FastIO(); solve();
}
