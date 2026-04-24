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
    
    // a number is even if it is divisible by 2 (remainder is 0 when divided by 2)
    if (num % 2 == 0) {
        cout << "Number is even";
    } else {
        cout << "Number is odd";
    }

    return 0;
}


/* 
Exercise 3 – Write a C++ program that asks the user for three numbers then find maximum between them.
*/

int main() {
    int num1, num2, num3, max;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    max = num1;              // assume first number is maximum

    if(num2 > max) {        // update max if num2 is bigger
        max = num2;
    }
    
    if(num3 > max) {        // update max if num3 is bigger
        max = num3;
    }

    cout << "Max number is: " << max;
    return 0;
}


/* 
Exercise 4: Write a C++ program that asks the user for a character then
            checks whether the character is vowel or consonant.
*/

int main() {
    char c;

    cout << "Enter a charchter: ";
    cin >> c;

    // vowel letters are: a, e, i, o, u, charchter might be uppercase so we include A, E, I, O, U as well in our if statement
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        cout << "Charachter is a vowel";
    } else {
        cout << "Charchter is consonant";
    }

    return 0;
}


/* 
Exercise 5: Write a C++ program that asks the user for a number then
            checks whether the number is divisible by 5 and 11 or not.
*/

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // a number is divisible by 5 if remainder is 0 when divided by 5
    // a number is divisible by 11 if remainder is 0 when divided by 11
    if (num % 5 == 0 && num % 11 == 0) {
        cout << "Number is divisible by both 5 and 11";
    } else {
        cout << "Number is not divisible by both 5 and 11";
    }

    return 0;
}
