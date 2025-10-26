#include<bits/stdc++.h>
using namespace std;

int n,m,p1,p2,cnt; vector<int>arr1,arr2,ans;

void solve(){
    cin>>n>>m;
    arr1.resize(n),arr2.resize(m),ans.resize(m);
    
    for(int i=0; i<n; i++) cin>>arr1[i];
    for(int i=0; i<m; i++) cin>>arr2[i];
    
    p1=0,p2=0,cnt=0;
    while(p1<n && p2<m){
        if(arr1[p1]<arr2[p2]){
            cnt++;
            p1++;
        }
        else{
            ans[p2]=cnt;
            p2++;
        }
    }
    
    
    if(p2<m) for(int i=p2; i<m; i++) ans[i]=cnt;
    
    for(auto &x : ans) cout<<x<<" ";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    solve(); return 0;
}
