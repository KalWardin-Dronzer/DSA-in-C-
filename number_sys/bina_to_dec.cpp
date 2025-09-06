// binary to decimal conversion
        
#include <iostream>
using namespace std;
int main() {
    int bin;
    cin>>bin;
    int last_digit;
    while (bin != 0) {
        last_digit = bin%10;
        bin /= 10;
        int power = 0;
        power++;
        for (int i=0;i<= power; i++){
            last_digit *= 2;
        }
        last_digit += last_digit;
        
    }
    cout<<last_digit;
    return 0;
}
//incomplete