/* 12,45,23,51,19,8
   8,45,23,51,19,12
   8,12,23,51,19,45
   8,12,19,51,23,45
   8,12,19,23,51,45
   8,12,19,23,45,51
final shorting arry is 8,12,19,23,45,51 */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}