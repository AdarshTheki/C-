#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 : "<<binary_search(v.begin(), v.end(), 6)<<endl;
    
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(), 6)-v.begin()<<endl;
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(), 6)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"Max -> "<<max(a,b)<<endl;    // 5
    cout<<"Min -> "<<min(a,b)<<endl;    // 3

    swap(a,b);  
    cout<<"a -> "<<a<<endl;     // 5

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String -> "<<abcd<<endl;     // dcba

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate : ";
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
}