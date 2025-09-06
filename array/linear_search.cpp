/*
Search if a given element is present in the array or not. If it is
not present then return -1 else return the index.
*/

#include <iostream>
using namespace std;
int main() {
    int array[] = {5,3,11,7,2,8};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"size of array is "<<size<<endl;
    int element =-1;
    cout<<"enter search element: ";
    cin>>element;
    for (int i = 0; i<size; i++) {
        if (array[i]==element) {
            element = i;
            break; //so that it won't traverse through the entire array unnecessarily
        }
    }
    cout<<element;
    
    return 0;
}