#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,l,r,sum; map<ll,ll>d; bool ok;

void solve(){
    cin>>n;
    
    while(n--){
        cin>>l>>r;
        d[l]++,d[r+1]--;
    }
    
    sum=0,ok=true;
    for(auto &[key,val] : d){
        sum+=val;
            
        if(sum>2){
            ok=false;
            break;
        }
    }
    
    cout<<(ok ? "YES" : "NO");
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    solve(); return 0;
}
