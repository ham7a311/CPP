#include <iostream>
using namespace std;

/* 
Exercise 1 – Write a C++ program that asks the user for two numbers
            then computes the total and the average of two numbers.
*/

int main() {
    double n1, n2, total;   // a number can be int or decimal, its better to use double rather than float as it can contain more numbers than float
    cout << "Enter first number: ";
    cin >> n1;      // ask user for first number
    cout << "Enter second number: ";
    cin >> n2;     // ask user for second number
  
    total = n1 + n2;
    cout << "Total: " << total << endl;
    cout << "Average: " << total/2;
  
    return 0;
}


/* 
Exercise 2 – Write a C++ program that converts a temperature in
            Celsius given by the user to Fahrenheit (Hint: F = C*9/5+32)
*/

int main() {
    double tempInC, tempInF;
    cout << "Temprature in Celecius: ";
    cin >> tempInC;     // ask user for temprature in celecius
    
    tempInF = (tempInC * 9/5 )+ 32;
    cout << "Temprature in Fehrenheit: " << tempInF;
  
    return 0;
}


/* 
Exercise 3 – Print a box like the one below.
                *******************
                *                 *
                *                 *
                *******************
*/

int main() {
    for(int i = 0; i < 4; i++) {            // outer loop controls rows (height of the box)
                
        for(int j = 0; j < 20; j++) {       // inner loop controls rows (width of the box)
                    
            if(i == 0 or i == 3 || j == 0 || j == 19) {
                cout << "*";    // print * on top row, bottom row, left edge, and right edge
            } else {
                cout << " ";   // print space inside the box
            }
                    
        }
        
        cout << endl;         // move to the next line after finishing each row
    }
  
    return 0;
}


/* 
Exercise 4 – Write a C++ program that computes and prints the result
                                  of
                      (512 - 282) / (47 *48 + 5)

                      It is roughly 0.1017
*/

int main() {
    cout << "Result: " << (double) (512 - 282) / (47 *48 + 5);
    return 0;
}


/* 
Exercise 5 – Write a C++ program that computes the perimeter and
            area of a rectangle.
*/

int main() {
    double length, width, area, perimeter;       // variables for length and width of the rectangle (given by user)
    cout << "Length of rectangle: ";
    cin >> length;
    cout << "Width of rectangle: ";
    cin >> width;

    perimeter = (length + width) * 2;   // perimeter = sum of all sides, you can add length + width then double it because opposite sides are equal
    area = length * width;
    
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

    return 0;
}


/* 
Exercise 6 – Write a C++ program that asks the user to enter a number x. 
            Print output x, 2x, 3x, 4x, and 5x, like below:
                        Enter a number: 7
                        7 14 21 28 35
*/

int main() {
    int x;   // number entered by user

    cout << "Enter a number: ";
    cin >> x;   // take input

    cout << x << " " << 2*x << " " << 3*x << " " << 4*x << " " << 5*x;

    return 0;
}


/* 
Exercise 7 – Write a C++ program that asks the user to enter a
            number then prints the square of the number.
*/

int main() {
    double x;   // number entered by user

    cout << "Enter a number: ";
    cin >> x;   // take input

    cout << "Square of " << x << " is: " << x * x;   // square = number * number

    return 0;
}


/* 
Exercise 8 – Write a C++ program that accepts the user's first and
            last name and print them in reverse order with a comma between them.
                        Enter your first name: Adam
                        Enter your last name: Smith
                         Your name is Smith, Adam
*/

int main() {
    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Your name is " << lastName << ", " << firstName;
  
    return 0;
}


int main() {
    int totalSeconds, hours, mins, secs;

    cout << "Enter number of seconds: ";
    cin >> totalSeconds;   // take total seconds from user

    hours = totalSeconds / 3600;   // 1 hour = 3600 seconds, so divide to get full hours

    int remainingSeconds = totalSeconds % 3600;   // get leftover seconds after removing hours

    mins = remainingSeconds / 60;   // 1 minute = 60 seconds, convert leftover to minutes

    secs = remainingSeconds % 60;   // remaining seconds after extracting full minutes

    cout << totalSeconds << " seconds is " << hours << " hour " << mins << " minutes " << secs << " seconds ";

    return 0;
}
