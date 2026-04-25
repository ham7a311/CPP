#include <iostream>
#include <cstdlib> // to use the random function
using namespace std;

/* 
Exercise 1 – Rewrite the following codes using the for loop style, then while loop, check
             the output result in 1 & 2 and if there is an error, try to correct it.
*/

/* part 1: */

/* Corrected version of do-while loop: */
int main()
{
    int m[9], i = 0;

    do {
        m[i] = 10;
        cout << i << " " << m[i] << endl;
        i++;
    } while (i < 9);

    return 0;
}


/* For Loop */
int main()
{
    int m[9];


    for (int i = 0; i < 9; i++) {
        m[i] = 10;
        cout << i << " " << m[i] << endl;
    }

    return 0;
}


/*  While Loop */
int main()
{
    int m[9], i = 0;

    while (i < 9) {
        m[i] = 10;
        cout << i << " " << m[i] << endl;
        i++;
    }

    return 0;
}


/* part 2: */

/* Corrected version of do-while loop: */
int main()
{
    int m[9], i = 0;

    for (int j = 0; j < 9; j++)
        m[j] = 0;

    do {
        m[i] = m[i] + 10;
        cout << i << " " << m[i] << endl;
        i++;
    } while (i < 9);

    return 0;
}


/* For Loop: */
int main()
{
    int m[9];

    for (int j = 0; j < 9; j++)
        m[j] = 0;

    for (int i = 0; i < 9; i++) {
        m[i] = m[i] + 10;
        cout << i << " " << m[i] << endl;
    }

    return 0;
}


/* While Loop: */
int main()
{
    int m[9], i = 0;

    for (int j = 0; j < 9; j++)
        m[j] = 0;

    while (i < 9) {
        m[i] = m[i] + 10;
        cout << i << " " << m[i] << endl;
        i++;
    }

    return 0;
}


/* 
Exercise 2 – Rewrite the following code using the while loop style, then do-while loop.
             First, Check the output result and if there is an error, try to correct it:
*/

/* Corrected version of For loop: */
int main()
{
    int x[10], summation = 0;

    // Fill array correctly (0 → 9)
    for (int a = 0; a < 10; a++)
    {
        x[a] = a + 10;
    }

    for (int a = 0; a < 10; a++)
    {
        summation = summation + x[a];
    }

    cout << "The summation is: ";
    cout << summation;

    return 0;
}


/* While Loop: */
int main()
{
    int x[10], summation = 0;
    int a = 0;

    // Fill array
    while (a < 10)
    {
        x[a] = a + 10;
        a++;
    }

    a = 0;

    while (a < 10)
    {
        summation = summation + x[a];
        a++;
    }

    cout << "The summation is: ";
    cout << summation;

    return 0;
}


/* Do-While Loop: */
int main()
{
    int x[10], summation = 0;
    int a = 0;

    // Fill array
    do
    {
        x[a] = a + 10;
        a++;
    } while (a < 10);

    a = 0;

    do
    {
        summation = summation + x[a];
        a++;
    } while (a < 10);

    cout << "The summation is: ";
    cout << summation;

    return 0;
}


/* 
Exercise 3 – Write a C++ program that asks the user to enter 10 numbers.
             Do the following:
                    a) Print the total of all numbers in the array.
                    b) Print the array in reverse order.
                    c) Print Yes if the array contains a 5 and No otherwise.
                    d) Print how many fives in the array.
                    e) Print how many integers in the array are less than 5.
                    f) Print the average of the elements in the array.
                    g) Print the largest and smallest values in the array.
                    h) Print how many even numbers are in the array.
*/

int main() 
{
   // Variables for calculations and arrays
   int total = 0, arr[10], rev[10];
   int fives = 0, intLessThan5 = 0, evenNumbers = 0;
   int largest, smallest;

   // Input: read 10 numbers into the array
   for(int i = 0; i < 10; i++) 
   {
      cout << "Enter a number: ";
      cin >> arr[i];
   }

   // Initialize largest and smallest with first element
   largest = arr[0];
   smallest = arr[0];

   // loop through array and compute sum, counts, and min/max
   for(int j = 0; j < 10; j++) 
   {
      total += arr[j]; // add each element in the array to the total sum

      if(arr[j] == 5) 
         fives++; // count occurrences of 5
      else if(arr[j] < 5) 
         intLessThan5++; // count values less than 5

      if(arr[j] % 2 == 0) 
         evenNumbers++; // count even numbers

     largest = arr[j] > largest ? arr[j] : largest;    // update largest value
     smallest = arr[j] < smallest ? arr[j] : smallest;  // update smallest value

   // Create reversed array
   for(int k = 0; k < 10; k++) 
   {
      rev[k] = arr[9 - k];
   }

   cout << "\nTotal: " << total << endl;

   // Output reversed array
   cout << "Reverse: ";
   for (int u = 0; u < 10; u++)
   {
      cout << rev[u] << " ";
   }
   cout << endl;

   // Check if 5 exists in array
   cout << (fives > 0 ? "Yes" : "No") << endl;

   cout << "Number of fives: " << fives << endl;
     
   cout << "Less than 5: " << intLessThan5 << endl;

   cout << "Average: " << (total / 10.0) << endl;

   cout << "Largest, Smallest: " << largest << ", " << smallest << endl;

   cout << "Even numbers: " << evenNumbers << endl;

   return 0;
}


/* 
Exercise 4 – Write a C++ program that asks the user to enter an array containing numbers between 1 and 12.
             Then replace all the entries in the array that are greater than 10 with 10.
                                    Note: Do not use for loops.
*/

int main() 
{
    // Array to store up to 50(or more, as you like) valid inputs
    // i = number of valid elements stored in array
    // j = loop index for processing/output
    // num =  Temporary variable to read user input
  
    int arr[50], i = 0, j = 0, num;


    // Input 
    do 
    {
        cout << "Enter numbers between 1 and 12 (enter -1 to exit): ";
        cin >> num;

        // Store only valid values in the array
        if(num >= 1 && num <= 12) 
        {
            arr[i] = num;
            i++; // increase count of valid elements
        }

    } while(num != -1); // stop when user enters -1

    // replace values greater than 10 with 10
    while(j < i) 
    {
        if(arr[j] > 10) 
        {
            arr[j] = 10;
        }

        // Output each element after processing
        cout << arr[j] << " ";
        j++;
    }

    return 0;
}


/* 
Exercise 5 – Write a C++ program that creates the following arrays using for loop.
                a) An array consisting of the integers 0 through 49
                b) An array containing the squares of the integers 1 through 50.
*/

int main() {

    int arr[50], sq[50];

    // a) integers 0 → 49
    for(int i = 0; i < 50; i++) {
        arr[i] = i;
    }

    // b) squares of 1 → 50 
    for(int i = 1; i <= 50; i++) {
        sq[i - 1] = i * i;       // start from 0 for the index(important)
    }

    for(int i = 0; i < 50; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < 50; i++) {
        cout << sq[i] << " ";
    }

    return 0;
}


/* 
Exercise 6 – Write a C++ program that asks the user for an integer and
             creates an array that consists of the factors of that integer.
*/

int main() {

    int num, factors = 0; // num stores user input, factors counts how many factors exist

    cout << "Enter a number: ";
    cin >> num; // read the number from the user

    // First loop: count how many factors the number has, to make the size of array dynamic (not fixed)
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) { // check if i divides num evenly
            factors++;     // increase factor count
        }
    }

    int arr[factors], index = 0; 
    // create array of size 'factors'
    // index is used to track the current position in the array

    // Second loop: find and store the actual factors
    for(int j = 1; j <= num; j++) {
        if(num % j == 0) {     // if j is a factor
            arr[index] = j;    // store it in the array
            index++;           // move to next position
        }
    }

    // Print all stored factors
    for(int u = 0; u < factors; u++) {
        cout << arr[u] << " ";
    }

    return 0;
}


/* 
Exercise 7 – Write a C++ program that generates 100 random integers that are either 0 or 1. Then find the longest run of zeros, the largest number of zeros in a row.
            For instance, the longest run of zeros in [1,0,1,1,0,0,0,0,1,0,0] is 4.

                        #include <cstdlib> // to use the random function
                        arr[i] = rand() % 2; // generate a random number.
*/

int main() {

    int arr[100], currentRun = 0, maxRun = 0;
    // arr stores 100 random values (0 or 1)
    // currentRun tracks the current streak of zeros
    // maxRun stores the longest streak found

    srand(time(0));
    // seed the random number generator so results differ each run ( dont forget to include <ctime> and <cstdlib> )

    // generate 100 random 0s and 1s
    for(int i = 0; i < 100; i++) {
        arr[i] = rand() % 2;
    }

    // loop through array to find longest consecutive run of zeros
    for(int j = 0; j < 100; j++) {

        if(arr[j] == 0) {
            currentRun++; 
            // increase current streak of zeros

            if(currentRun > maxRun) {
                maxRun = currentRun;
                // update longest streak if current is bigger
            }

        } else {
            currentRun = 0;
            // reset streak when a 1 is found
        }
    }

    // output result
    cout << "Longest run of zeros: " << maxRun << endl;

    return 0;
}


/* 
Exercise 8 – Write a C++ program that removes any repeated items from an array so that each item appears at most once.
             For instance, the array [1,1,2,3,4,3,0,0] would become [1,2,3,4,0].
*/

int main() {

    // Original array with duplicates
    int arr[10] = {1, 1, 2, 2, 3, 4, 4, 7, 7, 6};

    // Array to store unique elements (same max size as original)
    int newArray[10], newSize = 0;

    // Loop through each element of the original array
    for(int i = 0; i < 10; i++) {

        bool isDuplicate = false; 
        // Flag to check if arr[i] already exists in newArray

        // Check if arr[i] is already in newArray
        for(int j = 0; j < newSize; j++) {

            if(arr[i] == newArray[j]) {
                isDuplicate = true;         // mark as duplicate
                break;                      // no need to check further
            }

        }

        // If not a duplicate, add it to newArray
        if(!isDuplicate) {

            newArray[newSize] = arr[i];
            newSize++;                  // increase size of unique array

        }
    }

    // Print the array without duplicates
    for(int i = 0; i < newSize; i++) {
        cout << newArray[i] << " ";
    }

    return 0;
}
