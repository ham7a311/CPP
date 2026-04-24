#include <iostream>
using namespace std;

/* 
Exercise 1 – What is the output of the following program?
*/

int main() {
    int z = 11;                 // initialize z to 11

    while (z > 0) {             // while z bigger than 0:

        cout << z <<endl;       // print z while z bigger than 0
        z = z - 3;              // subtract 3 from z after every iteration

    }
     /* 
     iteration 1:
         z = 11
          Output: 11
     iteration 2:
         z = 8
          Output: 8
     iteration 3:
         z = 5
          Output: 5
     iteration 4:
         z = 2
          Output: 2
    
     z = -1 => no more iterations => end of while loop

     SOLUTION:
                         The program will print:
                                 11
                                 8
                                 5
                                 2 
*/

    return 0;
}


/* 
Exercise 2 – What is the output in the Ex.1 if the > (while condition sign) is replaced by <? 
*/

int main() {
    int z = 11;                 // initialize z to 11

    while (z < 0) {             // while z less than 0:

        cout << z <<endl;       // print z while z less than 0
        z = z - 3;              // subtract 3 from z after every iteration

    }
    
    /*  SOLUTION:

                    The program will print nothing => no output
                
    */

    return 0;
}


/* 
Exercise 3 – Write a program using the do while loop style to have the same result as Ex.1.
*/

int main() {
    int z = 11;                 // initialize z to 11
    do {
        cout << z <<endl;       // print z while z more than 0
        z = z - 3;              // subtract 3 from z after every iteration
    } while(z > 0);             // while z more than 0, apply the code (do)
    return 0;
}


/* 
Exercise 4 – Write a program using the for loop style to have the same result as Ex.1 .
*/

int main() {
    for(int z = 11; z > 0; z -= 3) {
        cout << z <<endl;       // print z while z more than 0
    }
    return 0;
}


/* 
Exercise 5 – Write a program to prints all the numbers that are multiples of 4 between 0 and 21 (0 & 21 are inclusive).
*/

int main() {
    for(int i = 0; i <= 21; i++) {
      
        if(i % 4 == 0) {
            cout << i << endl;
        }
      
    }
  
    return 0;
}


/* 
Exercise 6 – Write a C++ program that uses a for loop to print the numbers 8, 11, 14, 17, 20, . . . , 83, 86, 89.
*/

int main() {
    for(int i = 8; i <= 89; i += 3) {
        cout << i << ", ";
    }
    return 0;
}


/* 
Exercise 7 – Write a C++ program that uses a for loop to print the numbers 100, 98, 96, . . . , 4, 2.
*/

int main() {
    for(int i = 100; i >= 2; i -= 2) {
        cout << i << ", ";
    }
    return 0;
}


/* 
Exercise 8 – Write a C++ program that uses a for loop to print the powers of 2 from 1 to 1024.
*/

int main() {
    for(int i = 1; i <= 1024; i *= 2) {
        cout << i << endl;
    }
    return 0;
}


/* 
Exercise 9 – Write a C++ program that calculates the sum of n numbers.
            Sum = 1 + 2 + …. + n-1 + n. The output of program:
                        Enter number: 10
                            Sum = 55
*/

int main() {
    int sum, num;

    sum = 0;                             // initialize sum to 0 before adding numbers

    cout << "Enter number: ";
    cin >> num;                           // read input value n from user

    // loop from 1 to num (inclusive)
    for(int i = 1; i <= num; i++) {
        sum += i;                       // add current value of i to sum
    }

    cout << "Sum = " << sum;           // display final result

    return 0;
}


/* 
Exercise 10 – The Fibonacci numbers are the sequence below, where the first two numbers are 1, and each number thereafter is the sum of the two preceding numbers.
              Write a program that asks the user how many Fibonacci numbers to print and then prints that many.
                                        1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, . . .
*/

int main() {
    int a, b, fib, tempValue;

    a = 1; // first Fibonacci number
    b = 1; // second Fibonacci number

    cout << "How many Fibonacci numbers do you want: ";
    cin >> fib;         // read how many numbers to print

    // print the first two Fibonacci numbers
    cout << a << ", " << b << ", ";

    // loop starts from the 3rd position since first two are already printed
    for(int i = 3; i <= fib; i++) {
        cout << a + b << ", "; // print next Fibonacci number

        tempValue = a + b;    // calculate next number
        a = b;                // shift a to previous b
        b = tempValue;        // update b to new value
    }

    return 0;
}


/* 
Exercise 11 – Write a C++ program that asks the user for 10 numbers then prints the maximum number.
*/

int main() {
    int max, n;

    // read the first number and use it as initial max
    cout << "Enter a number: ";
    cin >> max;

    // loop runs 9 more times (total = 10 numbers)
    for(int i = 1; i < 10; i++) {

        cout << "Enter a number: ";
        cin >> n; // read next number

        // check if current number is greater than max
        if(n > max) {
            max = n; // update max
        }
    }

    cout << "Maximum number is: " << max;

    return 0;
}


/* 
Exercise 12 – Write a C++ program that asks the user to enter 100 positive integers.
              The program will stop asking the user to input more integers if the user entered a non-positive integer.
                    Then the program prints the following:
                        the number of positive integers entered
                        the total
                        the maximum
                        the average
                        the minimum
*/

int main() {
    
    int n, total = 0, positiveIntCount = 0, max, min;

    for(int i = 0; i < 100; i++) {

        cout << "Enter a positive integer (non-positive to stop): ";
        cin >> n;

        // stop if non-positive
        if(n <= 0) {
            break;
        }

        // first valid input initializes values
        if(positiveIntCount == 0) {
            max = min = n;
        }

        total += n;
        positiveIntCount++;

        if(n > max) max = n;
        if(n < min) min = n;
    }

    if(positiveIntCount == 0) {
        cout << "No positive integers were entered." << endl;
    } else {
        cout << "Number of positive integers: " << positiveIntCount << endl;
        cout << "Total: " << total << endl;
        cout << "Maximum number: " << max << endl;
        cout << "Minimum number: " << min << endl;
        cout << "Average: " << (double)total / positiveIntCount << endl;  // average can be decimal value
    }

    return 0;

}



