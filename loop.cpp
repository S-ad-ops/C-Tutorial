#include<iostream>
using namespace std;

int main(){
    //FOR Loop 
    for(int i=1; i<=5; i++){
        cout<<"Iteration number: "<<i<<endl;
    }

    //WHILE Loop
    while(true){
        cout<<"This is an infinite while loop."<<endl;
        break; // To prevent actual infinite loop during execution
    }
    int i = 1;
    while(i <= 40){
        cout << i <<" "<<endl;
        i++;
    }

    //DO-WHILE Loop
    int j = 1;
    do{
        cout << j <<" "<<endl;
        j++;
    }while(j <= 30);
    
    return 0;
    
}