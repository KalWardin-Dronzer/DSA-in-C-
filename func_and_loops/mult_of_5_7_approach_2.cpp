//Print the first multiple of 5 which is also a multiple of 7.
#include <iostream>
using namespace std;
int main() {
    int i =1;
    int mult5;
    while (true) {
        mult5 = 5*i;
        if (mult5%7 == 0){
            break;
        }
        i++;
    }
    cout<<mult5<<endl;
    return 0;
}

/*
for (i=1, )
*/