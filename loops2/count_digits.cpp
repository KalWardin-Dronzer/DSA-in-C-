// Count the number of digits for a given number n

#include <iostream>
using namespace std;
int main() {
    int input, digits;
    cin>>input;
    digits = 0;
    while (input != 0) {     
        digits++;
        input = input/10;
    }

    cout<<digits<<" digits";
    return 0;
}