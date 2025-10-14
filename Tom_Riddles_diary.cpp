#include<bits/stdc++.h>
using namespace std;
int n; string s;

void solve(){
    cin>>n;
    map<string,int>string_tracker;
    
    while(n--){
        cin>>s;
        
        if(string_tracker[s]==0){
            cout<<"NO"<<'\n';
            string_tracker[s]++;
        }
        else{
            cout<<"YES"<<'\n';
            string_tracker[s]++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); solve();
    return 0;
}
