#include <bits/stdc++.h>
using namespace std;
struct node{
    
};
int main(){
    
    int arr[]={1,2,4,1,2,4};
    set<int>st;//stores in ascending order
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);//----> log(n)
    }
    auto it=st.begin();
    advance(it,2);
    st.erase(st.begin());//--->st.erase(iterator) O(1)
    st.erase(st.begin(),it);//--->[) O(N)
    st.erase(5);//--->O(logN)
    set<int>st1={1,5,7,8};
    set<int>st2(st1.begin(),st1.end());
    it=st.find(9);// O(logN) it will be iterator to 9
    it=st.find(15);// it will point to st.end()
    st.emplace(1);
    cout<<st.size()<<endl;
    //set of anyting can be stored
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    unordered_set<int>unset;
    unset.insert(4);
    unset.insert(6);
    unset.insert(3);
    for(auto it:unset){
        cout<<it<<" ";
    }
    //its average time complexity is O(1)
    //in case you get TLE---switch to set
    //worst case is linear
    //prefer unordered_set if ascending order not req

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    //ms-->{1,1,2,2,3}
    it=ms.find(2);//returns an iterator pointing the first positon of 2
    ms.erase(ms.find(2));
    it=ms.find(2);
    advance(it,2);
    ms.erase(ms.find(2),it);
    //The difference between count() and find() functions in a 
    // set is count() returns 0 or 1 depending upon whether the 
    // element is not present or present respectively whereas the find() 
    // function returns an iterator pointing to the value if present else
    // next to the last value in the set.
}