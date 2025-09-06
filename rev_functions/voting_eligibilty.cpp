#include <iostream>
using namespace std;

void voting_eligibility(int age) {
    if (age<18) {
        cout<<"not eligible"<<endl;
    }
    else {
        cout<<"eligible"<<endl;
    }
    return;
}

int main() {
    int age;
    cin>>age;
    voting_eligibility(age);
    return 0;
}