// Calculate the sum of all the elements in the given array.

#include <iostream>
using namespace std;
int main() {
    int sum[5];
    int add = 0;
    for (int &element:sum) {
        cin>>element;
    }
    for (int element:sum) {
        cout<<element<<' ';
    }
    for (int element:sum) {
        add += element;
    }
    cout<<endl<<add<<endl;
 //   cout<<sum<<endl;
    return 0;

}