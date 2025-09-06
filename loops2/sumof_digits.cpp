// Find the sum of digits in a given
// number n

#include <iostream>
using namespace std;
int main() {
    int input, sum, digit;
    cin>>input;
    sum = 0;
    while (input != 0) {
        digit = input%10;
        sum += digit;
        input = input/10;
    }
    cout<<"sum = "<<sum;
    return 0;
}