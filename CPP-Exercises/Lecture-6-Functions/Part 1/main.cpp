#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* 
Exercise 1 – Find the index of the smallest number in an array
*/

int smallestIndex(int arr[7]) {

    // Assume the first element is the smallest initially
    int index = 0;
    int minimum = arr[0];

    // Loop through the array to find the smallest value
    for(int i = 0; i < 7; i++) {

        // If current element is smaller than the current minimum
        if(arr[i] < minimum) {

            // Update minimum value
            minimum = arr[i];

            // Update index of the smallest value
            index = i;
        }
    }

    return index;      // Return the index of the smallest element
}

int main() {

    
    srand(time(0));        // Seed the random number generator using current time

    int arr[7];

    // Fill the array with random numbers (0–99 or whatever)
    for(int i = 0; i < 7; i++) {
        arr[i] = rand() % 100;
    }

    // Print the array elements(not neccessary)
    for(int j = 0; j < 7; j++) {
        cout << arr[j] << " ";
    }

    cout << endl;

    // Call the function and store the returned index
    int index = smallestIndex(arr);

    // Print the index of the smallest element
    cout << "Index of smallest element: " << index << endl;         // if you want to print the smallest value, use arr[index]

    return 0;
}



/* 
Exercise 2 – Write a C++ function called sum_digits that is takes as an input an integer num and returns the sum of the digits of num.
                Example:
                sum_digits(231) will return 6
*/


int sum_digits(int num) {

   int total = 0;
   int numCopy = num;          // Copy of the input number so the original value is not modified

    // Loop continues while there are still digits left in numCopy
    while(numCopy > 0) {

      int last = numCopy % 10;         // Extract the last digit of the number

       total += last;       // Add the extracted digit to the total sum

       numCopy /= 10;       // Remove the last digit from numCopy

    }

    return total;
    
}

int main() {

    int result = sum_digits(231);

    cout << result;

    return 0;

}






