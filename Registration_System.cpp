#include<bits/stdc++.h>
using namespace std;
int n; string s;

void solve(){
    cin>>n; map<string,int>string_fr;
    
    while(n--){
        cin>>s; 
        
        if(string_fr[s]==0){
            cout<<"OK"<<'\n';
            string_fr[s]++;
        }
        else{
            cout<<s<<string_fr[s]<<'\n';
            string_fr[s]++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
