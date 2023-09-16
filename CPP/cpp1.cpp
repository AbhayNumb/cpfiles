#include <bits/stdc++.h>
using namespace std;

struct node{
    string str;
    int num;
    double doub;
    char ch;
    node(string str_,int num_,double doub_,int ch_){
        str=str_;
        num=num_;
        doub=doub_;
        ch=ch_;
    }
};
array<int,3>arr;//-->{all thing 0s i.e., 0,0,0}
int main(){
    int val=10;
    cout<<val<<endl;
    node *raj=new node("striver",79,12.0,'a');
    cout<<raj->str<<endl;


    array<int,3>arr;//-->{garbage value contain : ? , ? ?}
    array<int,5>arr1={1,5,6};//->{1,5,6,0,0}
    array<int,5>arr2={1};//--->{1,0,0,0,0}
    array<int,5>arr3={0};//--->{0,0,0,0,0}

    array<int,5>arr4;
    arr4.fill(10);//---->{10,10,10,10,10}

    // arr.at(index)
    for(int i=0;i<5;i++){
        cout<<arr4.at(i)<<" ";
    }

    //iterartor 
    //begin(),end(),rbegin(),rend()
    for(auto it=arr4.begin();it!=arr4.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr1.rbegin();it!=arr1.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr1.end()-1;it>=arr1.begin();it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    string s="asbaf";
    for(auto c:s){
        cout<<c<<" ";
    }
    cout<<endl;

    //size 
    cout<<arr4.size()<<endl;
    cout<<s.size()<<endl;
        
    int arr5[50];//predefined size 

    //in int main int[10^6] is max
    //if try to declare it globally size will become 10^7

    //if boolean in int main it can be 10^7 and 10^8 if golbal
    vector<int>vec;
    vec.push_back(0);
    vec.emplace_back(35);
    vec.emplace_back(35);//same as push_back() but faster
    vec.push_back(2);
    vec.pop_back();
    cout<<vec.size()<<endl;
    //segmentation fault if you push_back 10^7 times
    vec.clear();
    cout<<vec.size()<<endl;

    vector<int>vec1(4,0);//--->{0,0,0,0}
    vector<int>vec2(6,10);//--->{10,10,10,10}
    vector<int>vec3(vec2.begin(),vec2.end());//-- [)
    vector<int>vec4(vec2);


    //lower bound, upper bound 
    //swap 

    //to defining 2d vec
    vector<vector<int>>twod;
    twod.push_back(vec1);
    twod.push_back(vec2);
    cout<<twod.size()<<endl;
    for(auto itr:twod){
        for(auto it:itr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<twod.size();i++){
        for(int j=0;j<twod[i].size();j++){
            cout<<twod[i][j]<<" ";
        }
        cout<<endl;
    }
    //define 10X20
    vector<vector<int>>twod2(10,vector<int>(20,5));
    for(auto itr:twod2){
        for(auto it:itr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    //array of vector
    vector<int>arr7[4];
    arr7[0].push_back(4);

}