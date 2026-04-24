#include <iostream>
using namespace std;

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


/* 
Exercise 6: Write a C++ program that asks the user for to enter the length of each side in a triangle then checks
            whether the triangle is valid or not.
            •(Hint: A triangle is valid if sum of its two sides is greater •than the third side.)
*/

int main() {
    double a, b, c;

    cout << "Enter first side: ";
    cin >> a;

    cout << "Enter second side: ";
    cin >> b;

    cout << "Enter third side: ";
    cin >> c;

    // A triangle is valid if sum of any two sides is greater than the third side
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Triangle is valid";
    } else {
        cout << "Triangle is not valid";
    }

    return 0;
}


/* 
Exercise 7: Write a C++ program that asks the user to enter a length in centimeters.
            If the user enters a negative length, the program should tell the user that the entry is invalid.
            Otherwise, the program should convert the length to inches and print out the result.
                        There are 2.54 centimeters in an inch.
*/

int main() {
    double cm, inches;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    // check for invalid input
    if (cm < 0) {
        cout << "Invalid entry";
    } else {
        // 1 inch = 2.54 cm, so convert cm to inches
        inches = cm / 2.54;
        cout << "Length in inches: " << inches;
    }

    return 0;
}


/* 
Exercise 8: Write a C++ program that asks the user for a temperature.
            Then asks them what units, Celsius or Fahrenheit, the temperature is in.
            Your program should convert the temperature to the other unit.
            • The conversions are F = 9/5 C + 32 and C = 5/9(F – 32).
*/

int main() {
    double temp;
    char unit;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Enter unit (C or F): ";
    cin >> unit;

    // if input is Celsius, convert to Fahrenheit
    if (unit == 'C' || unit == 'c') {
        cout << "Temperature in Fahrenheit: " << (9.0 / 5.0) * temp + 32;
    }
    // if input is Fahrenheit, convert to Celsius
    else if (unit == 'F' || unit == 'f') {
        cout << "Temperature in Celsius: " << (5.0 / 9.0) * (temp - 32);
    }
    // invalid unit input
    else {
        cout << "Invalid unit/input";
    }

    return 0;
}


/* 
Exercise 9: A store charges $12 per item if you buy less than 10 items.
            If you buy between 10 and 99 items, the cost is $10 per item.
            If you buy 100 or more items, the cost is $7 per item.
            Write a C++ program that asks the user how many items they are buying and prints the total cost
*/

int main() {
    int items;
    double cost;

    cout << "Enter number of items: ";
    cin >> items;

    // determine price per item based on quantity
    if (items < 10) {
        cost = items * 12;
    }
    else if (items >= 10 && items <= 99) {
        cost = items * 10;
    }
    else {
        cost = items * 7;
    }

    cout << "Total cost: $" << cost;

    return 0;
}


/* 
Exercise 10: Write a C++ program that asks the user how many creditsthey have taken.
            If they have taken 23 or less, print that the student is a freshman.
            If they havetaken between 24 and 53, print that they are a sophomore.
            The range for juniors is 54 to 83, and for seniors it is 84 and over.
*/

int main() {
    int credits;

    cout << "Enter number of credits: ";
    cin >> credits;

    // determine student year based on credits taken
    if (credits <= 23) {
        cout << "Student is a freshman";
    }
    else if (credits >= 24 && credits <= 53) {
        cout << "Student is a sophomore";
    }
    else if (credits >= 54 && credits <= 83) {
        cout << "Student is a junior";
    }
    else {
        cout << "Student is a senior";
    }

    return 0;
}


/* 
Exercise 11: Write a C++ program that asks the user to input the basic salary of an employee then calculates its Gross salary according to following:
                            • Basic Salary <= 10000 : HRA = 20%, DA = 80%
                            • Basic Salary <= 20000 : HRA = 25%, DA = 90%
                            • Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

int main() {
    int basicSalary;
    double hra, da, finalSalary;

    cout << "Enter your salary: ";
    cin >> basicSalary;

    if(basicSalary <= 10000) {
        
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
        
    } else if (basicSalary <= 20000) {
        
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
        
    } else {
        
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
        
    }

    finalSalary = basicSalary + hra + da;

    cout << "Your salary is: " << finalSalary;

    return 0;
}


/* 
Exercise 12: Write a C++ program that asks the user to input the marks of one subject.
            The program should calculate the grade according to following:
                            Percentage >= 90% : Grade A
                            Percentage >= 80% : Grade B
                            Percentage >= 70% : Grade C
                            Percentage >= 60% : Grade D
                            Percentage >= 40% : Grade E
                            Percentage < 40% : Grade F
*/

int main() {
    double marks;

    cout << "Enter marks: ";
    cin >> marks;

    // determine grade based on percentage
    if (marks >= 90) {
        cout << "Grade A";
    }
    else if (marks >= 80) {
        cout << "Grade B";
    }
    else if (marks >= 70) {
        cout << "Grade C";
    }
    else if (marks >= 60) {
        cout << "Grade D";
    }
    else if (marks >= 40) {
        cout << "Grade E";
    }
    else {
        cout << "Grade F";
    }

    return 0;
}
