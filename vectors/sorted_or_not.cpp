// Check if the given array is sorted or not.

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v(6);
    for (int &ele:v) {
        cin>>ele;
    }
    for (int ele:v) {
        cout<<ele;
    }
    int sort = 0;
    for (int i = 1; i<6; i++) {
        if (v[i-1]<v[i]) {
            
        }
        else {
            sort += 1;
            
        }
    }
    if (sort == 0){
        cout<<"sorted"<<endl;
    }
    else {
        cout<<"not sorted"<<endl;
    }


    return 0;
}

// instead of int assign "sorted" bool datatype.