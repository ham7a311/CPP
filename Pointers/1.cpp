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
  

    // Better | Modern C++ (recommended)
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


      /* -------------------- SHADOWING -------------------- */
    
    int val = 0;

    if(true) {
        int val = 1;  // you can use the same variable name, because its in a different scope
        cout << "Value from if scope: " << *&val << endl;  // will print the value of the variable in the same scope, will print 1

        if(true) {
            int val = 2;  // you can use the same variable name, because its in a different scope
            cout << "Value from nested if scope: " << *&val << endl;  // will print the value of the variable in the same scope, will print 2
        }
      
    }

    cout << "Value from global scope: " << *&val << endl;  // will print the value of the variable in the same scope, will print 0
                                                          // it does not have access to the variable in the if statement scope


    return 0;
}
