/*
Find the maximum value out of all the elements in the array.
*/
#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter elements of the array: ";
    for (int &element:array) {
        
        cin>>element;
    }
    cout<<"this is your array [";
    for (int element:array) {
        
        cout<<element<<' ';
    }
    cout<<']'<<endl;
    int size_of_array = sizeof(array)/sizeof(array[0]);
    cout<<"size of array is "<<size_of_array<<endl;
    int max = array[0];
    for (int i = 0; i < size; i++){
        if ()
    }
    cout<<"max element is "<<max<<endl;
    return 0;
}
//incomplete