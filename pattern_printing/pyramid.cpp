// pyramid

#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    int ran = 1;
    int ran2 = 0;
    for (int row = 1; row <= input; row++) {
        for (int col = 1; col <= input-1; col++&&input--){
            cout<<' ';
        }
        for (int col = input-ran2; col <= input+ran2; col++&&ran2++){
            cout<<'*';          
        }
        cout<<endl;
    }
    return 0;
}
//this code is incorrect
// think of it in a easier way; only two for loops(nested was enough)
// think systematically, by breaking it into chunks.