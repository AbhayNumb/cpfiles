#include <bits/stdc++.h>
using namespace std;
struct node{
    
};
int main(){
    map<string,int>mpp;//sorted always according to the keys 
    mpp["raj"]=25;
    mpp["hina"]=25;
    mpp["bittu"]=25;
    mpp["sintu"]=25;
    mpp.emplace("raj",62);
    mpp.erase("raj");
    auto it=mpp.begin();
    advance(it,2);
    mpp.erase(mpp.begin(),it);
    if(mpp.empty()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
    pair<int,int>pr;
    pr.first=1;
    pr.second=10;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second;
    }   
    cout<<endl;
    for(auto it=mpp.begin();it!=mpp.end();++it){
        cout<<it->first<<" "<<it->second;
    }
    cout<<endl;
    it=mpp.find("sintu");
    cout<<(it==mpp.end())<<endl;
    it=mpp.find("simran");
    cout<<(it==mpp.end());
    unordered_map<int,int>unmpp;
    //unordered_map<pair<int,int>,int>mpp;//------->NOT POSSIBLE
    //O(1) in almost all cases
    //O(N) in worst case
    pair<int,int>pr2={1,2};
    pair<pair<int,int>,int>pr3={{1,2},1};
    cout<<pr3.first.second<<endl;
    pair<pair<int,int>,pair<int,int>>pr4={{1,2},{4,1}};
    set<pair<int,int>>st;
    map<pair<int,int>,int>mpp3;
    multimap<string,int>mpp4;
    mpp4.emplace("raj",2);
    mpp4.emplace("raj",5);
    for(auto it :mpp4){
        cout<<it.first<<" "<<it.second<<" ";
    }
}