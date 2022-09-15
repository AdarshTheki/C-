#include<iostream>
#include<limits.h> // new header file
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;  // new header file used
    int minNo=INT_MAX;  // new header file used
    for(int i=0; i<n; i++){
        maxNo=max(maxNo,arr[i]);  //Buillting Function used 'max'  
        minNo=min(minNo,arr[i]);  //Buillting Function used 'min'
    }
    cout<<"Max No."<<maxNo<<"\tMin No."<<minNo<<endl;
    return 0;
}