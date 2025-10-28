#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0);
#define ll long long int

ll t,n,k,cnt,l,r; string s;
deque<ll>dq;

void solve(){
    cin>>n>>k>>s;
    dq.clear();
    
    cnt=0,l=0;
    for(int r=0; r<s.size(); r++){
        if(s[r]=='B') dq.push_back(r);
        
        if(r==s.size()-1){
            if(!dq.empty()) cnt++;
        }
        else if(r-l+1==k){
            if(!dq.empty() && s[l]=='B'){
                cnt++;
            
                while(!dq.empty()){
                    s[dq.front()]='W';
                    dq.pop_front();
                }    
            }
            
            l++;
        }
    }
    
    
    cout<<cnt<<'\n';
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
