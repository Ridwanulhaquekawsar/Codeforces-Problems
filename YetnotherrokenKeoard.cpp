#include<bits/stdc++.h>
using namespace std;
int n,sz,i,j; string s;

void solve(){
    cin>>n; vector<int>small,capital;
    vector<bool>position_tracker;
    
    while(n--){
        cin>>s; small.clear(); capital.clear(); 
        position_tracker.clear(); position_tracker.assign(s.size(),true);
        
        sz=s.size(); i=0;
        while(i<sz){
            if(s[i]>='a' && s[i]<='z'){
                if(s[i]=='b'){
                    position_tracker[i]=false;
                    
                    if(small.size()>0){
                        position_tracker[small.back()]=false;
                        small.pop_back();
                    }
                }
                else{
                    small.push_back(i);
                }
            }
            else if(s[i]>='A' && s[i]<='Z'){
                if(s[i]=='B'){
                    position_tracker[i]=false;
                
                    if(capital.size()>0){
                        position_tracker[capital.back()]=false;
                        capital.pop_back();
                    }
                }
                else{
                    capital.push_back(i);
                }
            }
            
            i++;
        }
        
        
        j=0;
        while(j<sz){
            if(position_tracker[j]){
                cout<<s[j];
            }
            j++;
        }
        
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); solve();
    return 0;
}
