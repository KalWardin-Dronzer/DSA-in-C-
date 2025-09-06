// triangular pattern

#include <iostream>
using namespace std;
int main() {
    int r;
    cin>>r;
    for (int j =1; j<= r; j++) {
        for (int i = 1; i<= r; i++) {
            while (i==r) {
                cout<<'*';
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}
// don't need while loop at all just a simple nested for loop