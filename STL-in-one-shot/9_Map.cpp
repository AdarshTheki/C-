#include<iostream>
#include<map>
using namespace std;
int main (){
    map<int, string> m;

    m[1]= "babber";
    m[22]= "love";
    m[13]= "kumar";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    m.erase(13);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}