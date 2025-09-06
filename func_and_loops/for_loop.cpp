// Print the sum of the first n natural numbers, where n is the input.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    for (i =1; i <= n; i++) {
        sum += i;
        
    }
    cout<<sum<<endl;
    return 0;
}