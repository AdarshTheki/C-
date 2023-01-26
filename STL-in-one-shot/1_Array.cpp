#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};
    array<int,4> a = {4,5,6,7}; //static variable
    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<basic[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter at 2nd Index : "<<a.at(2)<<endl;

    cout<<"Empty or not : "<<a.empty()<<endl;

    cout<<"First element(a.front) : "<<a.front()<<endl;
    cout<<"First element(a.begin) : "<<a.begin()<<endl;

    cout<<"last element(a.back) : "<<a.back()<<endl;
    cout<<"last element(a.end) : "<<a.end()<<endl;
    return 0;
}