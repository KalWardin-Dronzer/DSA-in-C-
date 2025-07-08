#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter two numbers separated by enter: ";
    cin >> num1 >> num2;

    char cha;
    cout << "Enter the operation you want to perform (+, -, *, /, %): ";
    cin >> cha;

    float ans;

    switch (cha) {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
        case '%': {
            int int_num1 = round(num1);
            int int_num2 = round(num2);
            ans = int_num1 % int_num2;
            cout << int_num1 << cha << int_num2 << "=" << ans << endl;
            return 0;  // Exit after printing
        }
        default:
            cout << "Invalid operation" << endl;
            return 0;
    }

    cout << num1 << cha << num2 << "=" << ans << endl;
    return 0;
}
