//Print the first multiple of 5 which is also a multiple of 7.

#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int multiple5;
    while (multiple5%7 != 0) { //if this condition is true only then it
    // will run the loop
        multiple5 = 5*i;
        i++;
    }   
    cout<<multiple5<<endl;
    return 0;
}