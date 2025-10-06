#include<bits/stdc++.h>
using namespace std;
int s,t,i,j,k,cnt;

void do_this(){
    cin>>s>>t; i=0; cnt=0;
    while(i<=s){
        j=0; 
        while(j<=s){
            k=0; 
            while(k<=s){
                if(i+j+k<=s && i*j*k<=t){
                    cnt++;
                }k++;
            }j++;
        }i++;
    }cout<<cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); do_this();
    return 0;
}
