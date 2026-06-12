#include <iostream>
using namespace std;

/*
 --------------------- Pointers ---------------------

 IMPROTANT BAD PRACTISES:

    1)
         int *ptr1;  // contains junk address, could be anything
    
         *ptr1 = 55; // writing into junk address, BAD!
    
         undefined behaviour when printing or reading value using cout (you could get anything, the program might even crash)

     
    2)
         int *ptr1 = nullptr;  // initialized with pointer equivalent to zero: nullptr, a pointer pointing nowhere
    
         *ptr1 = 55; // writing into a pointer pointing nowhere, BAD, CRASH!
    
         undefined behaviour when printing or reading value using cout (you could get anything, the program might even crash)               

*/



int main() {

    /*
    IMPORTANT:

    ptr = &val2;
        Changes where the pointer points.

    *ptr = val2;
        Changes the value stored at the address the pointer points to.

    These are completely different operations.
  */

        int val1 = 10;  // address of val1: 0x16f136a58
        int val2 = 20;  // address of val2: 0x16f136a54

        /* ---------------------------- 1 ---------------------------- */

        int* ptr = &val1;  // ptr stores the address of val1

        cout << ptr << endl;   // prints address of val1: 0x16f136a58
        cout << *ptr << endl;  // prints value stored at that address: 10

        /* ---------------------------- 2 ---------------------------- */

        *ptr = val2;

        /*
            ptr still stores:
                0x16f136a58

            BUT the value at that address changes.

            Before:
                val1 = 10
                val2 = 20

            After:
                val1 = 20
                val2 = 20

            The pointer did NOT change.
        */

        cout << ptr << endl;   // still prints address of val1: 0x16f136a58
        cout << *ptr << endl;  // prints value at val1: 20

        /* ---------------------------- 3 ---------------------------- */

        ptr = &val2;

        /*
            Now the pointer itself changes.

            Before:
                ptr -> val1

            After:
                ptr -> val2

            No values are modified.
        */

        cout << ptr << endl;   // prints address of val2: 0x16f136a54
        cout << *ptr << endl;  // prints value at val2: 20

  
  

  
  return 0;
}
