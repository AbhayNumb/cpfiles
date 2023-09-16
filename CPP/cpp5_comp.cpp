#include <bits/stdc++.h>
using namespace std;
bool compint(int ele1,int ele2){
    if(ele1<ele2){
        return true;
    }
    return false;
}

//arr
//pair<int,int>arr[]={{5,2},{5,9},{1,4}};
//i want you to sort this in such a way ele who have first ele in pair
//smaller appears first and if first is equal then sort according to 
//second and keep larger second
bool comppair(pair<int,int>ele1,pair<int,int>ele2){
    if(ele1.first<ele2.first){
        return true;
    }else if(ele1.first==ele2.first){
        if(ele1.second>ele2.second){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>vec(5,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin()+2, vec.begin()+4);
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(vec.begin(), vec.end());
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
    int maxi=*max_element(vec.begin(),vec.end());
    int mini=*min_element(vec.begin(),vec.end());
    cout<<maxi<<" "<<mini<<endl;
    int sum=accumulate(vec.begin(),vec.end(),0);
    cout<<"SUM "<<sum<<endl;
    int mycount=count(vec.begin(),vec.end(),2);
    cout<<"OCCURENCE OF "<<2<<" is "<<mycount<<endl;
    auto it=find(vec.begin(),vec.end(),6);
    //pointing to the first instance of it or else it
    //returns pointing to the end() if it is not there
    int ind=it-vec.begin();
    cout<<ind<<endl;
    sort(vec.begin(),vec.end());
    bool res=binary_search(vec.begin(), vec.end(),6);
    if(res){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
    //lower_bound ONLY IN SORTED 
    //return an iterator pointing to the first element which is NOT LESS THAN x
    //arr[]->{1,5,7,7,8,10,10,11,11,12};
    //            ^      ^              ^
    //x=10        |      |              |
    //x=6         |                     |
    //x=13                              |
    it=lower_bound(vec.begin(),vec.end(),7);
    cout<<it-vec.begin()<<endl;

    //upper_bound 
    //return an iterator which points to an element which is JUST GREATER THAN x
    //arr[]->{1,5,7,7,8,10,10,11,11,12};
    //            ^   ^                 ^
    //x=7         |   |                 |
    //x=6         |                     |
    //x=12 end()                        |
    string s="bca";
    res=next_permutation(s.begin(),s.end());  
    cout<<res<<" "<<s<<endl;     
    s="cba";
    res=next_permutation(s.begin(),s.end());  
    cout<<res<<" "<<s<<endl; 
    res=prev_permutation(s.begin(),s.end());
    cout<<res<<" "<<s<<endl; 
    vector<pair<int,int>>newvec={{5,2},{5,9},{1,4}};
    sort(newvec.begin(),newvec.end(),comppair);
    for(auto it:newvec){
        cout<<it.first<<" "<<it.second<<endl;
    }
    sort(vec.begin(),vec.end(),greater<int>());
    //which works only if you wanna do this in descending
    // COMPARATOR



}