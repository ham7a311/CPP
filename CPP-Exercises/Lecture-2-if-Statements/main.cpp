/* 
Exercise 1 – Write a C++ program that asks the user for two numbers then find maximum between them.
*/

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << "Maximum is: " << a;
    } else {
        cout << "Maximum is: " << b;
    }

    return 0;
}


/* 
Exercise 2 – Write a C++ program that asks the user for a number then checks whether the number is even or odd.
*/

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number is even";
    } else {
        cout << "Number is odd";
    }

    return 0;
}
