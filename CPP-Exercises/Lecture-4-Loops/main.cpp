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




