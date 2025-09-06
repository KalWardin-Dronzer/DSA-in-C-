#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    for (int row = 1; row<= input; row++) {
        for (int col = 1; col <= input - (row-1); col++) {
            int i;
            cout<<i;
            i++;
        }
    }
    return 0;
}