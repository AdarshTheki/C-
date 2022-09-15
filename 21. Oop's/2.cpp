#include<bits/stdc++.h>
using namespace std;
class Student{
    string name;    
    
    public:
    int age;        
    bool gender;

    Student(){
        cout<<"Default Constructor"<<endl;
    }

    Student(string s, int a, int g){
        cout<<"Parameter Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    Student(Student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~Student(){
        cout<<"Distructor called."<<endl;
    }

    void setName(string s){
        name = s;
    }

    void getName(string s){
        cout<< name <<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (Student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main()
{   Student a("Adarsh", 20, 1);
    //a.printInfo();
    Student b("Rahul", 21, 0);
    Student c = a;   

    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    return 0;
}   