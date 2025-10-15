#include<bits/stdc++.h>
using namespace std;
int t,n,i; vector<int>arr;

void solve(){
    cin>>t; deque<int>dq;
    
    while(t--){
        cin>>n;
        arr.clear(),dq.clear();
        arr.resize(n);
        
        i=0;
        while(i<n){
            cin>>arr[i];
            i++;
        }
        
        
        for(auto &x : arr){
            if(dq.empty()) dq.push_front(x);
            else{
                if(x<dq.front()) dq.push_front(x);
                else dq.push_back(x);
            }
        }
        
        
        for(auto &x : dq) cout<<x<<" ";
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); solve();
    return 0;
}
