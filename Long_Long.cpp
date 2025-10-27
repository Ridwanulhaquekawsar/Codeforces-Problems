#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll t,n,ans,sum; vector<ll>a; 
bool first_neg,pos;

void solve(){
    cin>>n;
    a.resize(n);
    
    first_neg=false,pos=false;
    ans=0,sum=0;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=abs(a[i]);
        
        if(a[i]<0) first_neg=true;
        
        if(first_neg){
            if(a[i]>0){
                pos=true;
            }
            else if(a[i]<0){
                if(pos) ans++;
                pos=false;
            }
        }
    }
    
    
    cout<<sum<<" "<<(first_neg ? ans+1 : 0)<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin>>t; while(t--) solve();
}
