#include<iostream>
using namespace std;

int main (){
    int pocketMoney=300;
    for(int i=1; i<=30; i++){
        if(i%2==0){
            cout<<"Go Out Today 'continue'"<<endl;
            continue;
        }
        else if(pocketMoney==0){
            cout<<"Go Out Today 'break'"<<endl;
            break;
        }
        pocketMoney=pocketMoney-300;
        cout<<"'run'"<<i<<"--";
    }
    return 0;
}