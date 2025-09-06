/*
   1
  121
 12321
1234321
*/


#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    for (int row = 1; row <=input; row++) {
        for(int col = 1;col <= input-1; input--) {
            cout<<' ';
        }
        for(int col = input-1; col <= input; input--) {
            cout<<col;
        }
        cout<<endl;
    }


    
    return 0;
}