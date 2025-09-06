/*Write a program to take input from user for Cost Price (C.P.) and 
Selling Price(s.p.) and calculate Profit or Loss */

#include <iostream>
using namespace std;
int main(){
    float cp, sp;
    cout<<"Enter you cp and sp respectively seprated by enter:"<<endl;
    cin>>cp>>sp;
    float profit = sp - cp;
    float loss = cp - sp;

    if (cp>sp) {
        cout<<"your loss is:"<<loss<<endl;
    }
    else if(sp>cp) {
        cout<<"your profit is:"<<profit<<endl;
    }
    else {
        cout<<"0 P/L"<<endl;
    }
    system("pause"); /* works only on Windows(so that the exe file won't 
    shut automatically after showing the output)*/   
    return 0;
}