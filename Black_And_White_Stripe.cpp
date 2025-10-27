#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define ll long long int

int t,n,k,l,r,mn,w_cnt,b_cnt; string s;
bool flag;

void solve(){
    cin>>n>>k>>s;
    
    l=0,r=0,mn=INT_MAX,w_cnt=0,b_cnt=0;
    
    flag=false;
    while(r<n){
        if(s[r]=='W') w_cnt++;
        else b_cnt++;
        
        if(r-l+1==k){
            if(w_cnt==0){
                flag=true;
                break;
            }
            else{
                mn=min(mn,w_cnt);
                
                if(s[l++]=='B') b_cnt--;
                else w_cnt--;
            }
        }
        
        r++;
    }
    
    
    cout<<(flag ? 0 : mn)<<'\n';
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
