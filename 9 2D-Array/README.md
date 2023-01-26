## 2D Array:

**The Multi-Dimensional Array is also known as Rectangular Arrays in C++ :-** <br>
It can be two dimensional or three dimensional. The data is stored in tabular form **(row ∗ column)** Which is also known as **Matrix**.
```c++
int main(){
    Int arr[n][m];  //declaration of 2D array
    bool arr[n][m]; 
    char arr[n][m];
    float arr[n][m];
}
```
Code: Taking input or print output of Array of matrx: <br>
```c++
int main(){
    int n, m;   cin>>n>>m;
    int arr[n][m];              // Taking Input Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){     // Printing output array
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```
### There are Some Problem Practies:-
1.  We have to find if value x is present in the 2D array.
2.  Spiral Order Matrix Traversal.
3.  Matrix Transpose.
4.  etc....
