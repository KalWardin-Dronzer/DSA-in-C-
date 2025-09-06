// inverted triangle

#include <iostream>
using namespace std;
int main() {
    int r;
    cin>>r;
    for (int j = r; j >=1; j--) {
        for (int i = 1; i<= j; i++) {
            cout<<'*';

        }
        cout<<endl;
    }

    
    return 0;
}