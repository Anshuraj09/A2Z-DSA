/*Divided into four parts 
Algorithms/Containers/Functions/Iterators*/
//pairs
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void explainPair(){
    pair<int, int> p1={1,3};
    pair<int,pair<int,int>>p2={1,{3,4}};

    cout<<p1.first<<" "<<p2.second.second<<" "<<p2.second.first;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}
/*Some popular containers include:

Sequence Containers (like arrays, vectors, deques, lists)
Associative Containers (like sets, maps, multimap)
Unordered Containers (like unordered sets, unordered maps)*/
//vector
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);
    vector<int>v(5);
    vector<int>v1(5,20);
    vector<int>v2(v1);

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";

}


