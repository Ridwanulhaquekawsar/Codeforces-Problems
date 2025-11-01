#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,l,r,cnt,ans;
string s;
bool flag;
char first_checker,second_checker;

void solve(){
    cin>>n>>s;
    
    l=0;
    r=n-1;
    
    while(l<r){
        if(s[l]==s[r]) l++,r--;
        else{
            first_checker=s[l];
            second_checker=s[r];
            break;
        }
        
        if(l>=r){
            cout<<0<<nl;
            return;
        }    
    }
    
    
    cnt=0;
    ans=INT_MAX;
    flag=true;
    
    while(l<r){
        if(s[l]==s[r]) l++,r--;
        else if(s[l]==first_checker){
            cnt++;
            l++;
        }
        else if(s[r]==first_checker){
            cnt++;
            r--;
        }
        else{
            flag=false;
            break;
        }
    }
    
    if(flag) ans=min(cnt,ans);
    else ans=INT_MAX;
    
    
    
    cnt=0;
    flag=true;
    l=0;
    r=n-1;
    
    while(l<r){
        if(s[l]==s[r]) l++,r--;
        else if(s[l]==second_checker){
            cnt++;
            l++;
        }
        else if(s[r]==second_checker){
            cnt++;
            r--;
        }
        else{
            flag=false;
            break;
        }
    }
    
    if(flag){
        if(ans!=INT_MAX) ans=min(ans,cnt);
        else ans=cnt;
    }
    
    cout<<(ans==INT_MAX ? -1 : ans)<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
