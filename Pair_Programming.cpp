#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,k,n,m,checker,l,r,checker_n,checker_m;
bool a_flag;
vector<ll>a,b;
deque<ll>dq;

void solve(){
    cin>>k>>n>>m;
    a.clear(),a.resize(n);
    b.clear(),b.resize(m);
    dq.clear();
    
    for(auto &v : a) cin>>v;
    for(auto &v : b) cin>>v;
    
    
    if(a[0]>k && b[0]>k){
        cout<<"-1"<<nl;
        return;
    }
    else if(a[0]<k) a_flag=true;
    else a_flag=false;
    
    l=0;
    r=0;
    checker=0;
    checker_n=0;
    checker_m=0;
    
    while(l<n || r<m){
        if(a_flag){
            while(a[l]<=k){
                checker=0;
                
                if(a[l]==0){
                    dq.push_back(0);
                    k++;
                }    
                else dq.push_back(a[l]);
                l++;
                
                //cout<<4<<nl;
                
                if(l==n){
                    checker_n++;
                    break;
                }
            }
            
            if(l<n && a[l]>k) checker++;
            if(l<n && checker_m==1 && a[l]>k) checker_m++;
        }
        else{
            while(b[r]<=k){
                checker=0;
                
                if(b[r]==0){
                    dq.push_back(0);
                    k++;
                }    
                else dq.push_back(b[r]);
                r++;
                
                //cout<<3<<nl;
                
                if(r==m){
                    checker_m++;
                    break;
                }
            }
            
            if(r<m && b[r]>k) checker++;
            if(r<m && checker_n==1 && b[r]>k) checker_n++;
        }
        
        if(checker_n==2 && checker_m==2) break;
            
        if(checker==2 || checker_n==2 || checker_m==2){
            cout<<"-1"<<nl;
            return;
        }
            
        a_flag=!a_flag;
    }
    
    //cout<<1<<nl;
    
    for(auto &x : dq) cout<<x<<" ";
    cout<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
