#include <iostream>
using namespace std;

int main() {

  // "0" is the only exception, it can be stored for any pointer type, but its better to initialize your pointers with "nullptr"

  
    // Permissible
    int *ptr1 = 0;  // can only store address of a variable with type int
    double *ptr2 = 0;  // can only store address of a variable with type double (except 0)
    char *ptr3 = 0;
    string *ptr4 = 0;

    // Better
    int *betterPtr1 = nullptr;
    double *betterPtr1 = nullptr;
    char *betterPtr1 = nullptr;
    string *betterPtr1 = nullptr;


    // why is initializing to nullptr better than initializing to 0 ?
    /*           ---------------   Answer  ---------------
            1. It clearly means “no pointer”
              nullptr → explicitly a null pointer
              0 → looks like an integer, not obviously a pointer

            2. It prevents wrong function calls

            3. It is type-safe
               nullptr has its own type (std::nullptr_t)
               It converts to any pointer type safely
               But it is NOT an integer

            4. It avoids confusion in code

               With 0, people can’t always tell if you mean:
                number zero or null pointer
                nullptr removes that confusion completely.

            5. Modern C++ standard
                nullptr was introduced in C++11
                It is the modern and recommended way

            
    */

    return 0;
}
