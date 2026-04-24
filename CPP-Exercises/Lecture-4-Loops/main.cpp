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


/* 
Exercise 13 – Write a C++ program that displays the n terms of odd natural number and their sum.
              Sample Output:
                            Input number of terms: 5
                            The odd numbers are: 1 3 5 7 9
                            The Sum of odd Natural Numbers up to 5 terms: 25
*/

int main() {
    int n, total = 0;

    cout << "Input number of terms: ";
    cin >> n;

    cout << "the odd numbers are: ";

    // generate odd numbers directly in loop by starting from 1 then adding 2: 1 3 ...
    for(int i = 1; i <= n * 2; i += 2) {

            cout << i << " ";       // print odd number
            total += i;             // add it to total

    }

    cout << endl;

    cout << "The sum of odd natural numbers up to " << n << " terms: " << total;

    return 0;

}


/* 
Exercise 14 – Write a C++ program that finds the number and sum of all integer between 100 and 200 which are divisible by 9.
            Sample Output:
                                Numbers between 100 and 200, divisible by 9:
                                108 117 126 135 144 153 162 171 180 189 198
                                The sum : 1683
*/

int main() {

    int total = 0;
    
    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    
    for(int i = 100; i <= 200; i++) {
        if(i % 9 == 0) {
            cout << i << " ";
            total += i;
        }
    }

    cout << endl;

    cout << "The sum: " << total;

    return 0;

}


/* 
Exercise 15 – Write a C++ program that makes such a pattern like right angle triangle with number increased by 1.
              Sample Output:
                        Input number of rows: 4
                                1
                                2 3
                                4 5 6
                                7 8 9 10
*/

int main() {

    int num = 1, rows; // num keeps track of the current number to print

    cout << "Input number of rows: ";
    cin >> rows; // read number of rows for the triangle

    // outer loop controls number of rows
    for(int i = 1; i <= rows; i++) {

        // inner loop controls how many numbers are printed in each row
        for(int j = 1; j <= i; j++) {

            cout << num << " "; // print current number
            num++;              // increase number for next print
        }

        cout << endl; // move to next line after each row
    }

   return 0;
}


/* 
Exercise 16 – Write a C++ program that asks the user for a number then prints all factors of the number.
            Sample Output:
                                Input a number: 63
                                The factors are: 1 3 7 9 21 63
*/

int main() {

    int num;

    cout << "Input a number: ";
    cin >> num;

    cout << "The factors are: ";

    // loop from 1 to num to check all possible divisors
    for(int i = 1; i <= num; i++) {

        // if i divides num evenly, it is a factor
        if(num % i == 0) {
            cout << i << " "; // print the factor
        }
    }

    return 0;
}


/* 
Exercise 17 – Write a C++ program that finds the perfect numbers between 1 and 500.
            Sample Output:
                The perfect numbers between 1 to 500 are:
                6
                28
                496
            Hint: a perfect number is a positive integer that is equal to the sum of its proper
                 positive divisors, that is, the sum of its positive divisors excluding the number itself
*/

int main() {

    int total = 0; // stores sum of proper divisors for each number
    
    // loop through numbers from 1 to 500
    for(int i = 1; i <= 500; i++) {

        // find all proper divisors of i (numbers less than i)
        for(int j = 1; j < i; j++) {

            // check if j is a divisor of i
            if(i % j == 0) {
                total += j; // add divisor to total sum
            }
        }

        // check if sum of divisors equals the number itself
        if(i == total) {
            cout << i << endl; // print perfect number
        }

        total = 0; // reset total for next number
    }

    return 0;
}


/* 
Exercise 18 – Write a C++ program that checks whether a given number is prime or not.
              Sample Output:
                Input a number to check prime or not: 13
                The entered number is a prime number.

    Remember(this is not in the exercise):
    A prime number is a number greater than 1 that has exactly two divisors:
    1 and itself. This means it cannot be evenly divided by any other number.
                Example:
                    13 is prime because it is only divisible by 1 and 13.
                    12 is not prime because it is divisible by 2, 3, 4, and 6.
*/

int main() {

    int num;
    bool isPrime = true; // assume number is prime at the start

    cout << "Input a number to check prime or not: ";
    cin >> num;

    // check divisibility from 2 to num-1
    for(int i = 2; i < num; i++) {

        // if num is divisible by i, it is not prime
        if(num % i == 0) {
            isPrime = false;
        }
    }

    // output result based on flag
    if(isPrime) {
        cout << "The entered number is a prime number";
    } else {
        cout << "The entered number is not a prime number";
    }

    return 0;
}


/* 
Exercise 19 – Write a C++ program that finds prime numbers within a range.
Sample Output:
            Input number for starting range: 1
            Input number for ending range: 100
                            The prime numbers between 1 and 100 are:
                            2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67
                            71 73 79 83 89 97
                            The total number of prime numbers between 1 to 100 is:
                            25
                            
    Remember(this is not in the exercise):
    A prime number is a number greater than 1 that has exactly two divisors:
    1 and itself. This means it cannot be evenly divided by any other number.
                Example:
                    13 is prime because it is only divisible by 1 and 13.
                    12 is not prime because it is divisible by 2, 3, 4, and 6.
*/

int main() {

    int start, end, total = 0;

    cout << "Input number for starting range: ";
    cin >> start;

    cout << "Input number for ending range: ";
    cin >> end;

    for(int i = start; i <= end; i++) {
        bool isPrime = true;

        if(i <= 1) isPrime = false;

        for(int j = 2; j < i; j++) {

            if(i % j == 0) isPrime = false;

        }

        if(isPrime) {

            cout << i << " ";
            total++;
            
        }
    }

    cout << endl;
    cout << "The total number of prime numbers between " << start << " and " << end << " is: " << total;


    return 0;
}


/* 
Exercise 20 – Write a C++ program that finds the Greatest Common Divisor (GCD) of two numbers.
              Sample Output:
                Input the first number: 25
                Input the second number: 15
                The Greatest Common Divisor is: 5
*/

int main() {

    int a, b, minimum, gcd;

    cout << "Input first number: ";
    cin >> a;

    cout << "Input second number: ";
    cin >> b;

    // find the smaller number (GCD cannot be larger than this)
    minimum = a > b ? b : a;

    // check all possible divisors from 1 to minimum
    for(int i = 1; i <= minimum; i++) {

        // if i divides both numbers, it is a common divisor
        if(a % i == 0 && b % i == 0) {
            gcd = i; // keep updating → last valid one becomes greatest
        }

    }

    cout << "The Greatest common divisor is: " << gcd;

    return 0;
}
