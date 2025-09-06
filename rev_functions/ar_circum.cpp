// Given radius of a circle. Write a function to print the 
// area and circumference of the circle.

#include <iostream>
using namespace std;

int ar_cum(int radius) {
    int area = 3.14*radius*radius;
    int circum = 2*3.14*radius;
    cout<<"Area: "<<area<<endl<<"circumference: "<<circum<<endl;
    return area, circum;
}

int main() {
    int radius;
    cin>>radius;
    ar_cum(radius);
    return 0;
}