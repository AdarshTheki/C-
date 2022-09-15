/* A.12,45,23,51,19,8   C. 12,23,19,8,45,51
   12,45,23,51,19,8      12,23,19,8,45,51
   12,23,45,51,19,8      12,19,23,8,45,51 
   12,23,45,51,19,8      12,19,8,23,45,51
   12,23,45,19,51,8
   12,23,45,19,8,51   D. 12,19,8,23,45,51
                         12,19,8,23,45,51
B. 12,23,45,19,8,51      12,8,19,23,45,51
   12,23,45,19,8,51   
   12,23,45,19,8,51   E. 12,8,19,23,45,51
   12,23,19,45,8,51      8,12,19,23,45,51
   12,23,19,8,45,51  
Final Shorting array is 8,12,19,23,45,51
*/
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
    int counter=1;
    while(counter<n-1){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}