#include<bits/stdc++.h>
using namespace std;
int n; string s;

void solve(){
    cin>>n; map<string,int>string_tracker;
    stack<string>stk;
    
    while(n--){
        cin>>s; stk.push(s);
    }
    
    while(!stk.empty()){
        if(string_tracker[stk.top()]==0){
            cout<<stk.top()<<'\n';
            string_tracker[stk.top()]++;
        }
        
        stk.pop();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
