#include<bits/stdc++.h>
using namespace std;
/* given string remove dublicate: "aaaabbbeeecdddd" */
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    cout<<removeDup("aaaabbbeeecdddd");
    return 0;
}