#include<bits/stdc++.h>
using namespace std;
// Given an array nums of distinct integers return all the possible permutations. You can return the answer in any order.
// STL used sortcut
// TimeComplexity : O(N!)

int main(){   
    int n; cin>>n;
    vector<int> a(n);
    vector<vector<int>> ans;
    for(auto &i : a)
        cin>>i;
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}