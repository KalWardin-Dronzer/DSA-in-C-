/*Find the Maximum of Three Numbers using if else statements.*/
#include <iostream>
using namespace std;
int main(){
    float num1, num2, num3;
    cout<<"enter three no. separated by enter: "<<endl;
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1 > num3) {
        cout<<num1<<" is the largest!"<<endl;
    }
    else if (num2 > num3 && num2 > num3) {
        cout<<num2<<" is the largest!"<<endl;
    }
    else {
        cout<<num3<<" is the largest!"<<endl;
    }
    return 0;
}







