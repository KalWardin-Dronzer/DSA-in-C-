// Design a calculator to perform basic arithmetic operations (+ - / * %)
// take 2 no as input and operator then perform calculation.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num1, num2;
    cout<<"enter two no. separated by enter "<<endl;
    cin>>num1>>num2;
    char cha;
    cout<<"enter the operation you want to perform(+,-,*,/,%):"<<endl;
    cin>>cha;
    float ans;
    switch (cha)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;  
    default:
        int int_num1 = round(num1);
        int int_num2 = round(num2);
        ans = int_num1 % int_num2;
        break;
    }
    cout<<num1<<cha<<num2<<"="<<ans<<endl;
}

// can't use c++ keywords as var names      