#include<bits/stdc++.h>
using namespace std;
int t,n,i,j,mx,mn; set<int>st; vector<int>arr;
bool flag;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        arr.clear(),arr.resize(n+1),st.clear();
        
        i=1;
        while(i<=n){
            cin>>arr[i];
            st.insert(arr[i]);
            i++;
        }
        
        i=1,j=n,flag=false;
        while(i<j){
            if(arr[i]==*st.begin()){
                st.erase(st.begin());
                i++;
            }
            else if(arr[i]==*(--st.end())){
                st.erase(--st.end());
                i++;
            }
            
            
            if(arr[j]==*st.begin()){
                st.erase(st.begin());
                j--;
            }
            else if(arr[j]==*(--st.end())){
                st.erase(--st.end());
                j--;
            }
            
            if(i>=j) break;
            
            if((arr[i]!=*st.begin()) && (arr[i]!=*prev(st.end())) && (arr[j]!=*st.begin()) && (arr[j]!=*prev(st.end()))){
                cout<<i<<" "<<j<<'\n';
                flag=true;
                break;
            }
        }
        
        if(!flag) cout<<"-1"<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
