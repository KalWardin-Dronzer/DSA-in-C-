//Print the sum of the stream of N integers in the input using 
//do-while loop.

#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    cin>>n;
    int sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout<<sum<<endl;

    return 0;
}