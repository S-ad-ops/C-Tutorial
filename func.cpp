#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter num1 :"<< endl;
    cin>> num1;
    cout<<"Enter num2 :"<< endl;
    cin>> num2;
    int result = sum(num1, num2);
    cout<<"The sum is: "<< result << endl;

    return 0;
}