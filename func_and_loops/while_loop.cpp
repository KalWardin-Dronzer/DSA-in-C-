// Print the sum of the first n natural numbers, where n is the input.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1; // loop variable
    int sum = 0;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout<<sum;
    return 0;
}