/* Tower_of_Hanoi */
#include<bits/stdc++.h>
using namespace std;
void towerofHanoi(int n, char scr, char dest, char helper){
    if(n==0){
        return; //base case
    }
    towerofHanoi(n-1,scr,helper,dest);
    cout<<"move from "<<scr<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,scr);
}
int main(){
    towerofHanoi(3,'A','C','B');
    return 0;
}