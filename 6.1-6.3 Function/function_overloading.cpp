#include <iostream>
using namespace std;

int myfunction(int x, int y) {
    return (x + y);
}
int myfunction(float x, float y) {
    return (x + y);
}
void myfunction(int x, int y, int z){
    cout<< ((x + y) + z) ;
}
int main(){
   int a,b,c;
   float d,e;
   // int a=4, b=5, c=6;
   // float d=3.14, e=3.14;
   cout<<myfunction(a,b)<<endl;
   cout<<myfunction(d,e)<<endl;
   myfunction(a,b,c);
   return 0;
}

