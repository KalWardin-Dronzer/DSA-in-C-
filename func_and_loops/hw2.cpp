#include<iostream>
using namespace std;
int main() { 
    // Terenary operator
    int no1 = 6;
    int no2 = 8;
    int max;
    no1 > no2? max = no1 : max = no2;
    cout<<max<<endl;
    return 0;
}