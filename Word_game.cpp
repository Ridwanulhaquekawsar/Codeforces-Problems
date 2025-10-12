#include<bits/stdc++.h>
using namespace std;
int t,n,line,first,second,third,n1,n2,n3; string s;

void solve(){
    cin>>t; vector<string>box1,box2,box3;
    while(t--){
        cin>>n; n1=n,n2=n,n3=n;
        map<string,int>word_fr;
        box1.clear(),box2.clear(),box3.clear();
        
        while(n1--){
            cin>>s; box1.push_back(s);
            word_fr[s]++;
        }
        
        while(n2--){
            cin>>s; box2.push_back(s);
            word_fr[s]++;
        }
        
        while(n3--){
            cin>>s; box3.push_back(s);
            word_fr[s]++;
        }
        
        first=0;
        for(auto &str : box1){
            if(word_fr[str]==1){
                first+=3;
            }
            else if(word_fr[str]==2){
                first+=1;
            }
        }
        
        second=0;
        for(auto &str : box2){
            if(word_fr[str]==1){
                second+=3;
            }
            else if(word_fr[str]==2){
                second+=1;
            }
        }
        
        third=0;
        for(auto &str : box3){
            if(word_fr[str]==1){
                third+=3;
            }
            else if(word_fr[str]==2){
                third+=1;
            }
        }
        
        cout<<first<<" "<<second<<" "<<third<<'\n';
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
