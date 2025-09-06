// Reverse the digits of a number

#include <iostream>
using namespace std;
int main() {
    int input, digit, rev_no;
    cin>>input;
    rev_no = 0;
    while (input != 0) {
        digit = input%10;
        input /= 10;
        cout<<digit;
        rev_no = rev_no*10 + digit;

    }
    cout<<endl<<rev_no;
    return 0;
}   
// do a clear dry run to undestand properly