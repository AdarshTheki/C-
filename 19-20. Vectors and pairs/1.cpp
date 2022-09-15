#include<iostream>
#include<vector> // New header file include
using namespace std;
// Vectors is a dynamic array.
int main()
{   
    vector<int> v;      // initialise vectors
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for(int i=0; i<v.size(); i++){  // print vector
        cout<<v[i]<<" ";
    }cout<<endl;
    
    vector<int>::iterator it; // print for iterator.
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    for(auto element:v){    // print for auto keyword.
        cout<<element<<" ";
    }cout<<endl;

    v.pop_back();   // 1 2

    vector<int> v2 (3,50);
    // 50 50 50

    swap(v,v2);
    for(auto element:v){    
        cout<<element<<" "; // 50 50 50
    }cout<<endl;
    for(auto element:v2){    
        cout<<element<<" "; // 1 2
    }cout<<endl;

    //sort(v2.begin(), v2.end());

    return 0;
}