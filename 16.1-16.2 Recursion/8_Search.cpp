#include<bits/stdc++.h>
using namespace std;
/* Find the First and last occurrence of an element using recursion. */
int firstocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<"first array : "<<firstocc(arr,7,0,2)<<endl;   
    cout<<"last array : "<<lastocc(arr,7,0,2)<<endl;   
    return 0;
}