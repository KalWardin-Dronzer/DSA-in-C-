/*
Find the sum of the following series
S = 1-2 + 3- 4 ... n
*/
#include <iostream>
using namespace std;
int main() {
    int i, input, sum, sum1, sum2;
    cin>>input;
    sum = sum1 = sum2 = 0;
    for (i=1; i<= input; i+= 2) {
        sum1 += sum1;
    }
    for (i = 2; i<= input; i+= 2) {
        sum2 += sum2;
    }
    sum = sum1 - sum2;
    i=1;
    while (i<=input) {
        if (i == input) {
            cout<<i<<'='<<sum;
            i++;
        }
        else {
            cout<<i<<'+';
            i++;
        }
    }

    
    return 0;
}
//wrong