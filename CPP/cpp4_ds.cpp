#include <bits/stdc++.h>
using namespace std;
struct node{
    
};
int main(){
    //stack
    stack<int>st;

    //pop
    //top
    //size
    //empty
    //push and emplace
    st.push(2);
    st.push(5);
    st.push(4);
    st.push(1);
    st.pop();//deletes the last entered element
    cout<<st.top()<<" "<<endl;//prints the last entered element
    bool flag=st.empty();
    //this deletes entire stack
    while(!st.empty()){
        st.pop();
    }
    cout<<st.size()<<" "<<endl;
    // Before calling st.top(), you should ensure that the stack 
    // is not empty and contains at least one element
    // for(auto it:st){
    //     cout<<it<<" ";
    // }
    queue<int>q;
    //push
    //front 
    //pop
    //size
    //empty
    priority_queue<int>pq;//stores all in sorted order and all op in log(N)
    //push
    //size
    //top
    //pop
    //empty
    pq.push(1);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<pair<int,int>>pq2;
    pq2.push({1,5});
    pq2.push({1,6});
    pq2.push({3,7});
    priority_queue<int>pq3;
    pq3.push(-1);
    pq3.push(-3);
    pq3.push(-4);
    pq3.push(-6);
    cout<<-1*pq3.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>pq4;//minimum priority_queue
    pq4.push(1);
    pq4.push(1);
    pq4.push(5);
    pq4.push(3);
    cout<<pq4.top()<<endl;

    deque<int>dq;
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end,rbegin,rend
    //size
    //clear
    //empty
    //at

    list<int>ls;
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end,rbegin,rend
    //size
    //clear
    //empty
    //at
    //remove --->O(1)
    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);
    ls.push_front(4);
    ls.remove(3);//----->O(1)op
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    map<pair<int,int>,int>mpp;
    pair<int,int>p1={1,3};
    mpp[p1]++;
    // for(auto it:mpp){
    //     cout<<it.first.first<<" "<<endl;
    // }

    pair<int,int>p2={1,1};
    mpp[p2]++;
    // for(auto it:mpp){
    //     cout<<it.first.second<<endl;
    // }
    bitset<5>bt=10001;
    // cin>>bt;///11110
    cout<<bt<<endl;
    //all--->return true if all bits are 1
    cout<<bt.all()<<endl;
    //any --->return true if any bit is 1
    cout<<bt.any()<<endl;
    //count ---->return numbers of set bit
    cout<<bt.count()<<endl;
    //flip
    bt.flip(2);
    cout<<bt<<endl;
    //none----> return true if none is set
    cout<<bt.none()<<endl;
    //set//---->set all one 
    cout<<bt<<endl;
    bt.set(1,1);
    cout<<bt<<endl;
    bt.set();
    cout<<bt<<endl;
    bt.flip(0);
    cout<<bt<<endl;
    //reset ---->set all to 0 or any specified to 0
    //size
    cout<<bt.size()<<endl;
    //test ----->test if any index is 1
    cout<<bt.test(0)<<endl;
    cout<<bt.any();
}