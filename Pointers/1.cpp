#include <iostream>
using namespace std;

int main() {

  // 0 is treated as a null pointer constant and can be converted to any pointer type(You can initialize pointers of any type (int*, float*, etc.) to 0.).

 /*  0 is a null pointer constant
    it represents a pointer value that does not point to any valid memory location.
*/

  
    // Permissible but not best practise  |  old style
    int* ptr1 = 0;  // null pointer (does not point to anything)
    double* ptr2 = 0;  // null pointer (does not point to anything)
    char* ptr3 = 0;   // null pointer (does not point to anything)
    string* ptr4 = 0;  // null pointer (does not point to anything)
  

    // Better naming (each variable must be unique) | Modern C++ (recommended)
    int* betterPtr1 = nullptr;
    double* betterPtr2 = nullptr;
    char* betterPtr3 = nullptr;
    string* betterPtr4 = nullptr;

    /*
        Why nullptr is better than 0?

        1. Clearly means "no object"
        2. Type-safe (has type std::nullptr_t)
        3. Avoids confusion with integer 0
        4. Prevents wrong overload selection
        5. Modern C++ standard (C++11+)
    */


    return 0;
}
