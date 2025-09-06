#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    for (int row = 1; row <= input; row++) {
        for (int col = 1; col <= 6; col++){
            if (row == 1||row == input) {
                cout<<col;
            }
            else {
                if (col == 1||col == 6) {
                    cout<<col;
                }
                else {
                cout<<' ';
                }
            }

        }
        cout<<endl;
    }

    
    return 0;
}