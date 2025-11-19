#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a;
ll g;
vector<ll>v;

void solve(){
    cin >> n;
    a.resize(n);
    
    for(auto &bx : a) cin >> bx;
    sort(a.begin(),a.end());
    
    if(a[0] == a[1]) cout << "Yes" << nl;
    else if(a[0] == 1){
        g=0;
        
        for(ll i = 1; i < n; i++) g = __gcd(a[i],g);
        
        if(g == 1) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    else if(a[0] != 1){
        v.clear();
        
        for(ll i = 1; i < n; i++) if(a[i] % a[0] == 0) v.push_back(a[i]);
        
        if(v.size() < 2) cout << "No" << nl;
        else{
            g = 0;
            
            for(ll i = 0; i < v.size(); i++) g = __gcd(g,v[i]);
            
            if(g == a[0]) cout << "Yes" << nl;
            else cout << "No" << nl;
        }
    }
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}
















/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
         long long n;
         cin>>n;
         long long arr[n+10];
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
         }
         sort(arr+1,arr+n+1);
         if(arr[1]==arr[2])
         {
             cout<<"YES"<<endl;
             continue;
         }
         if(arr[1]==1)
         {
             long long g=0;
             for(int i=2;i<=n;i++)
             {
                 g=__gcd(arr[i],g);
             }
             if(g==1)
             {
                 cout<<"YES"<<endl;
             }
             else
             {
                 cout<<"NO"<<endl;
             }
             continue;
         }
         vector<long long>v;
         for(int i=2;i<=n;i++)
         {
             if(arr[i]%arr[1]==0)
             {
                 v.push_back(arr[i]);
             }
         }
         sort(v.begin(),v.end());
         if(v.size()<2)
         {
             cout<<"NO"<<endl;
             continue;
         }
         long long g=0;
         for(int i=0;i<v.size();i++)
         {
             g=__gcd(g,v[i]);
         }
         if(g!=arr[1])
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
    }
    return 0;
}
*/
