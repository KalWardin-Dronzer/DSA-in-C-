// Count the number of occurrences of a particular element x.
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
    int occurence = 0;
    for (int i = 0; i<= 6;i++) {
        if (v[i]==key) {
            occurence += 1;
        }
    }
    cout<<endl<<"occurence: "<<occurence<<endl;
    
    return 0;
}