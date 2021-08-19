#include <bits/stdc++.h>
using namespace std;
int main(){
    int success = 0;
    for(int i=1;i<=1000;i++){
        int carPos = 1+rand()%3;
        int chosen = 1;
        int monty;
        if(chosen==carPos){
            monty = 2 + rand()%2;
        }
        else if(carPos==2){
            monty = 3;
        }
        else{
            monty = 2;
        }
        if(monty==2) chosen = 3;
        else chosen = 2;

        cout<<"Chosen -> "<<chosen<<" carPos-> "<<carPos<<"\n";
        if(chosen==carPos) {
            success ++;
            cout<<"YOU WIN!!!!\n";
        }
        else{
            cout<<"YOU LOSE!!!!\n";
        }
    }
    cout<<success<<" times success in 1000 rounds\n";
    cout<<"Success Probability = "<<(double)success/1000;
}