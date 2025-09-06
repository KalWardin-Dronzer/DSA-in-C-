/*
Q4 - Given two numbers a and b, write a program using functions 
to print all the odd numbers between them.
*/

#include <iostream>
using namespace std;
void odd_no(int num1, int num2) {
    int i;
    for (int i = num1; i < num2; i++) {
        if (i%2!=0) {
            cout<<i<<endl;
        }
        else {

        }
    }
    return;
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    odd_no(num1,num2);
}