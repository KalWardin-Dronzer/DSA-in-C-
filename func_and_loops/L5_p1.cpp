//Write a program to print the value if it is even and divisible by 3.
#include <iostream>
using namespace std;
int main() {
    cout<<"enter an intrger: "<<endl;
    int num;
    cin>>num;
    if (num%2 == 0 && num%3 == 0) {
        cout<<num<<" is even and divisible by 3"<<endl;
    }
    else if (num%2 == 0 || num%3 == 0) {
        if (num%2 == 0) {
        cout<<num<<" is even but not divisible by 3"<<endl;   
        }
        else {
        cout<<num<<" is not even but divisible by 3"<<endl;    
        }
    }
    else {
        cout<<num<<" is neither even nor divisible by 3"<<endl;
    }
    return 0;
}