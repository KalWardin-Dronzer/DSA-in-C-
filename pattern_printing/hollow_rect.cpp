// print a hollow rectangle
/*

*/
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cin>>r>>c;
    for (int j=1; j<=r; j++) {
        for (int i = 1; i<= c; i++) {
            if (j ==1 || j==r) {
                cout<<'*';
            }
            else {
                if (i == 1 || i== c){
                    cout<<'*';
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

// instead of this use multiple logical operatoe while stating your 
// condition