#include<iostream> 
using namespace std;
/*
  Given a square matrix A & its number of rows (or columns) N, 
  return the transpose of A
  The transpose of a matrix is the matrix flipped over it's main
  diagonal, switching the row and column indices of the matrix
*/
int main() 
{
    int N = 3;
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i=0; i<N; i++){ 
        for(int j=i; j<N; j++){
            //swap  ( means change to a<=>b.)
            int temp = A[i][j]; 
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    //print transpose for(int i=0; i<N; i++) {
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
