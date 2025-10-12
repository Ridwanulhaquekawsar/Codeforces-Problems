#include<bits/stdc++.h>
using namespace std;
int n; string old_s,new_s;

void solve(){
    cin>>n; map<string,int>name_fr;
    map<string,string>parent_of_string,parent_updated_name;
    
    while(n--){
        cin>>old_s>>new_s; 
        if(name_fr.find(old_s)==name_fr.end()){
            name_fr[old_s]++,name_fr[new_s]++;
            parent_of_string[old_s]=old_s,parent_of_string[new_s]=old_s;
            parent_updated_name[old_s]=new_s;
        }
        else{
            name_fr[old_s]++,name_fr[new_s]++;
            parent_of_string[new_s]=parent_of_string[old_s];
            parent_updated_name[parent_of_string[old_s]]=new_s;
        }
    }
    
    cout<<parent_updated_name.size()<<'\n';
    for(auto &[parent,updated_name] : parent_updated_name){
        cout<<parent<<" "<<updated_name<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
