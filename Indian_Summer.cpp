#include<bits/stdc++.h>
using namespace std;
int n,cnt; string s;

void solve(){
    cin>>n; cin.ignore();
    map<string,int>fr;
    
    cnt=0;
    while(n--){
        getline(cin,s); fr[s]++;
        if(fr[s]==1){
            cnt++;
        }
    }
    
    cout<<cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
