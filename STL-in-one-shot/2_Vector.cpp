#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;
    vector<int> a(5,1);
    
    cout<<"Print a :"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity-0 : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-1 : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-2 : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-3 : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity-4 : "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity-5 : "<<v.capacity()<<endl;
    
    cout<<"Size : "<<v.size()<<endl;
    
    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;

    cout<<"Front : "<<v.front()<<endl;
    cout<<"Back : "<<v.back()<<endl;

    cout<<"Before Pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    cout<<"After Pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size : "<<v.size()<<endl;
}

