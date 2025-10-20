#include<bits/stdc++.h>
using namespace std;
int t,n,val,first,second; map<int,int>cnt;
priority_queue<int>pq;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        cnt.clear(),pq=priority_queue<int>();
        
        while(n--){
            cin>>val;
            cnt[val]++;
        }
        
        for(auto &[x,y] : cnt) pq.push(y);
        
        while(!pq.empty()){
            if(pq.size()<2) break;
            
            first=pq.top(),pq.pop();
            second=pq.top(),pq.pop();
            
            first--,second--;
            
            if(first) pq.push(first);
            if(second) pq.push(second);
        }
        
        cout<<(pq.empty() ? 0 : pq.top())<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
