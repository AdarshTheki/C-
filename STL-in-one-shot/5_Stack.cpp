#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<string> s;
    
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"top Element "<<s.top()<<endl;
    
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;

}