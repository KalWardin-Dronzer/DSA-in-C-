/*
121212
212121
121212
212121
*/

#include <iostream>
using namespace std;
int main() {
    int row, col;
    cin>>row>>col;
    for (int i = 1; i <= row; i++) {
        for (int j= 1; j<= col; j+2) { //wrong, use j += 2
            if (i%2==0) {
                cout<<2;
            }
            else {
                cout<<1;
            }
        }
        for (int j = 2; j<= col; j+2) {
            if (i%2==0) {
                cout<<1;
            }
            else {
                cout<<2;
            }           
        }
        cout<<endl;
    }
    
    return 0;
}
// wrong code