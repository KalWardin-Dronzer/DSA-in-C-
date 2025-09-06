//Count the number of triplets whose sum is equal to the given value x.

/*
Pattern: Target sum
Find the total number of pairs in the
Array whose sum is equal to the given
value x.
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int v[] = {1,2,3,4,5,6};
    int input;
    cin>>input;
    int pair = 0;
    for (int i = 0; i <= 6; i++) {
        for (int j = i+1; j<6; j++) {
            for (int k = j+1; k<6; k++){
                if (v[i]+ v[j] + v[k] == input) {
                    pair += 1;
                }
            }
        }
    }
    cout<<endl<<pair<<" pairs"<<endl;
    
    return 0;
}













