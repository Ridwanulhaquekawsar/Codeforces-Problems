#include<bits/stdc++.h>
using namespace std;
int n,mx_fr,i; string s,mx_str,sub; 
map<string,int>str_fr;

void solve(){
    cin>>n>>s;
    
    i=0; mx_fr=0;
    while(i<n-1){
        sub=s.substr(i,2); 
        str_fr[sub]++;
        
        if(str_fr[sub]>mx_fr){
            mx_str=sub;
            mx_fr=str_fr[sub];
        }
        
        i++;
    }
    
    
    cout<<mx_str;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
