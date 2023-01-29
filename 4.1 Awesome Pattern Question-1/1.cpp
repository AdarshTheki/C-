#include<iostream>
using namespace std;

int main(){
    // Create inputs of how manys rows and columns are there.
    int row, col;
    cin>>row>>col;

    // How many rows are there and outer loop will run 
    for(int i=1; i<=row; i++){

    // How many columns and which type to print.
        for(int j=1; j<=col; j++){
            cout<<"* ";     // What do you need to print
        }
        cout<<endl;         
    }
    return 0;
}
// This methd tearn to 1000+ star pattern you will create, Please follow this method. 