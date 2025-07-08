/*
 score >80 print Well Done
// score —
50-80 ,
print Can improve
// score <50, print Poor performance*/
#include <iostream>
using namespace std;
int main() {
    float score;
    cout<<"Enter your score:";
    cin>>score;
    if (score/10 > 8) {
        cout<<score/10<<"is your cgpa, well done"<<endl; 
    }
    else if (5 < score/10 < 8) {
        cout<<score/10<<"is your cgpa, can perform better"<<endl;
    }
    else { // no condition should be given in else statement
        cout<<score/10<<"poor performance"<<endl;
    }
    

}