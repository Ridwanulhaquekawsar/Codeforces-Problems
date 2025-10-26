#include<bits/stdc++.h>
using namespace std;

int t,n,i,j; string s; bool flag;

void solve(){
    cin>>n>>s;
    
    i=0,j=n-1,flag=false;
    while(s[i]!=s[j]){
        if(i>j){
            flag=true;
            break;
        }   
         
        i++,j--;
    }
    
    cout<<(!flag ? j-i+1 : 0)<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin>>t; while(t--) solve();
}
