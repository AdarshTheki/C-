#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    do
    {
        cout<<n<<endl;    // atleast one time loot sucess
        cin>>n;
    } while (n>0);
    
    return 0;
}