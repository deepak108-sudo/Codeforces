#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
    int n; cin>>n;
    vector<pair<pair<int,int>,int>> sc(n);

    vector<int> ans(n); //To store answer
    for(int i=0;i<n;i++){
        cin>>sc[i].first.first>>sc[i].first.second;
        sc[i].second=i; //We are storing because after sorting all get jumbled and we need to store the room no. according to given index
    }

    //Sorting
    sort(begin(sc),end(sc));

    //Now simulate each customer arrival
    using Room=pair<int,int>;
    priority_queue<Room,vector<Room>,greater<Room>> pq;  //Storing departure time from minimum to maximum ans room no.
    int lastRoom=0;
    for(int i=0;i<n;i++){
        if(pq.empty() || pq.top().first>=sc[i].first.first){    //if past departure is greater or equal than arrival then form new room
            lastRoom++; //Create new room
            pq.push(make_pair(sc[i].first.second,lastRoom));   //Pushing the departure time and room that they are staying
            ans[sc[i].second]=lastRoom; //Keep answer updated with last room thats why i have taken third field
        }
        else{
            Room leave=pq.top();
            pq.pop();
            pq.push(make_pair(sc[i].first.second,leave.second)); //We are assiging same room after popping up the past person
            ans[sc[i].second]=leave.second;
        }
    }

    cout<<lastRoom<<endl;
    //Now print the room
    for(int &num:ans){
        cout<<num<<" ";
    }
}