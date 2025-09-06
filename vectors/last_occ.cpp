// Find the last occurrence of an element x in a given array.
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
    int key;
    cin>>key;
    int i = v.size();
    int index;
    while (v[i] != key) {
        index = i-1;
        i--;
    }
    cout<<endl<<index;
    return 0;
}