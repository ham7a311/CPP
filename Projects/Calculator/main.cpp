#include <iostream>
using namespace std;

int main() {

    char op;   // operator(+ - / *)
    double num1, num2, result;

    cout << "******* CALCULATOR *******" << endl;

    cout << "Enter either (+  -  /  *): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
         case '+':
         result = num1 + num2;
         cout << "The result is: " << result << endl;
         break;
         case '-':
         result = num1 - num2;
         cout << "The result is: " << result << endl;
         break;
         case '/':
         result = num1 / num2;
         cout << "The result is: " << result << endl;
         break;
         case '*':
         result = num1 * num2;
         cout << "The result is: " << result << endl;
         break;
         default:
         cout << "Please enter valid numbers/operator" << endl;
         break;
    }

    


    cout << "******* END OF PROGRAM *******";



    return 0;
}
