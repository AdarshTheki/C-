#include<bits/stdc++.h>
using namespace std;
// Given an array nums of distinct integers return all the possible permutations. You can return the answer in any order.
vector<vector<int>> ans;
void permutation(vector<int> &a, int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx; i<a.size(); i++){
        swap(a[i], a[idx]);
        permutation(a,idx+1);
        swap(a[i],a[idx+1]);
    }
    return;
}
int main(){   
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    permutation(a,0);
    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}