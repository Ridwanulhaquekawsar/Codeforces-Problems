/*
Monday, 25 January , 2026 !

☑ Third problem of the day done ! ╰┈➤ (Codeforces Round 1076 (Div 3) )

• Problem No. C (Replace And Sum) ! 

• Problem Link : ⤵︎
https://codeforces.com/contest/2193/problem/C

Observation : 🕵🏻‍♂️ 

   • If we make first array's elements as large as possible in the 1st step by replacing a's elemts with b's elements,  And then in second step we can easy propagate the first array's element as large as we can by iterating from backward to begining  replace  operation ! 
   
Approach  : 👇 🎯

- At first, we'll precalculate the the array a with the help of b array by replacing value of a,  a[i] = max(a[i], b[i]);

- And then we'll run another loop for array a only from end to begin by propagating large value as much as we can ! 

- Lastly we will calculate the prefix sum of first array a and then in the query part, we will simple print the l to r intermediate sum by (prf[r] - prf[l - 1] if l > 1) ! 

Time Complexity :  O(n)  📝 ! 

Implementation Uses : </> 👨🏻‍💻  Prefix Sum ! 
*/


Code : 👇

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define pinf LLONG_MAX
#define ninf LLONG_MIN

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define sc second
#define fr front()
#define bc back()
#define bg begin()
#define ed end()
#define pu push
#define po pop
#define pf push_front
#define pb push_back
#define pob pop_back()
#define pof pop_front()
#define emp emplace
#define clr clear()
#define wh while
#define emp_fr emplace_front
#define emp_bc emplace_back
#define mn_ele min_element
#define sz(x) (ll)x.size()

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector< vector<ll> >
#define vpll vector<pll>
#define S string

#define St set<ll>
#define Ms multiset<ll>
#define Mp map<ll, ll>
#define Ump unordered_map<ll, ll>
#define Q queue<ll>
#define Pq priority_queue<ll>
#define Dq deque<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

bool isPrime(ll n){

    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    
    for(ll i = 3; i <= n/i; i += 2){
        if(n % i == 0) return 0;
    }
    
    return 1;
}

class cmp{
    public:
    bool operator()(){
        
    }
};

/*
ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
*/

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll T;
ll n, q;
vll a, b;
ll l, r;
vll prf;

void solve(){
    in n >> q;
    rs(a, n);
    rs(b, n);
    rs(prf, n);
    
    rep(i, n) in a[i];
    rep(i, n) in b[i];
    
    rep(i, n) a[i] = max(a[i], b[i]);
    rrep1(i, n - 2, 0) a[i] = max(a[i], a[i + 1]);
    
    prf[0] = a[0];
    rep1(i, 1, n - 1) prf[i] = prf[i - 1] + a[i];
    
    wh(q--){
        in l >> r;
        l--;
        r--;
        
        if(l == 0) cout << prf[r] << " ";
        else cout << prf[r] - prf[l - 1] << " ";
    }
    
    cout << nl;
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}
