#include<bits/stdc++.h>
using namespace std;
int t,i,sz; string s; bool flag;

void solve(){
    cin>>t; map<char,int>char_fr;
    
    while(t--){
        cin>>s;
        
        i=0; sz=s.size(); flag=true;
        while(i<sz){
            if(s[i]==s[i-1]){
                if(s[i]!='a'){
                    s.insert(i,1,'a');
                }
                else{
                    s.insert(i,1,'b');
                }
                
                flag=false;
                break;
            }
            
            i++;
        }
        
        
        if(flag){
            if(s[sz-1]!='a'){
                s.push_back('a');
            }
            else{
                s.push_back('b');
            }
        }
        
        cout<<s<<'\n';
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
