//Given 2 numbers a and b. Find a raise to the power b.

#include <iostream>
using namespace std;
int main() {
    int a,b, power;
    cin>>a>>b;
    power = 1;
    for (int  i=1; i<= b; i++) {
        power *= a;
        
    }
    cout<<power;
    
    return 0;
}

// can use pow() from cmath for direct result.