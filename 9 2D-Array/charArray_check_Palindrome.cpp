#include<bits/stdc++.h>
using namespace std;
/*	Check palindrome	*/
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for (int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true)
        cout<<"word is a Palindrome"<<endl;
    else
        cout<<"word is not a Palindrome"<<endl;   
    return 0;
}