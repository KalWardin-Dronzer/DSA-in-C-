#include<iostream>
using namespace std;
//here we've to put semicolon after every line and sentence
int main(){
    // this is where you write your code 
    cout<<"Hello World"<<endl; // endl to change line

    // Int dtype
    int apples = 8;
    cout<<apples<<endl;
    cout<<"size of int:"<<sizeof(apples)<<endl;

    cout<<"Enter your age:";
    int num;
    cin>> num;
    cout << "your age is:"<<num<<endl;

    cout<<"Enter your 1st and 2nd integer:";
    int num1, num2;
    cin>> num1>>num2;
    
    cout<< "the sum of integers = "<< num1 + num2<< endl;

// swap two no. with the help of a third var
    int int1, int2;
    cin>>int1>>int2;
    
    int temp;
    temp = int1;
    int1 = int2;
    int2 = temp;

    cout<<"the first input is:"<<int1<<endl<<"the second input is:"<<int2
    <<endl;




    return 0;
} 