#include<bits/stdc++.h>
using namespace std;
class Student{
    string name;    //Private
    
    public:
    int age;         // Data member of class
    bool gender;

    void setName(string s){
        name = s;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};

int main()
{   Student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        
        cout<<"Age = ";
        cin>>arr[i].age;
        
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}   