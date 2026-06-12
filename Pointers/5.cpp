#include <iostream>
using namespace std;

/*
    --------------------- References, Addresses, and Pointers ---------------------

    & has TWO meanings in C++:

    1. In a declaration:
            int& ref = x;
       Here & means:
            "ref is a reference"

    2. In an expression:
            &x
       Here & means:
            "give me the address of x"

    ------------------------------------------------------------

    * also has TWO meanings:

    1. In a declaration:
            int* ptr;
       Here * means:
            "ptr is a pointer to an int"

    2. In an expression:
            *ptr
       Here * means:
            "go to the address stored in ptr and read the value"

*/

int main() {

    /*
        const int& val = 19;

        Normally, references must refer to an existing object:

            int x = 10;
            int& ref = x;

        However, 19 is a literal, not a variable.

        C++ solves this by creating a temporary const int
        object behind the scenes and binding val to it.

        You can think of it like:

            const int temp = 19;
            const int& val = temp;

        (This is just a mental model, not the exact code generated.)

        After this line:

            val refers to an integer containing 19

        Memory (conceptually):

            Address      Value
            0x1000       19

            val refers to the object at 0x1000
    */
    const int& val = 19;

    /*
        &val means:

            "give me the address of the object val refers to"

        Type of &val:

            const int*

        Therefore:

            const int* ptr = &val;

        is valid.

        But:

            int* ptr = &val;

        is NOT valid because:

            &val is a const int*

        and C++ does not allow removing constness automatically.

        After this line:

            ptr stores the address of the integer.

        Memory:

                  19
                  ^
                  |
                val

            ptr ----+
                    |
                    v
                   19
    */
    const int* ptr = &val;

    /*
        val is a reference.

        Reading val gives the value of the integer it refers to.

        Output:
            19
    */
    cout << val << endl;

    /*
        &val means:

            "give me the address of the object"

        Output:

            something like:
            0x1000

        (actual address varies every run)
    */
    cout << &val << endl;

    /*
        ptr stores that same address.

        Therefore:

            ptr == &val

        Output:

            same address as above
    */
    cout << ptr << endl;

    /*
        *ptr means:

            1. Look at the address stored in ptr
            2. Go to that address
            3. Read the value there

        ptr stores:

            0x1000

        value at 0x1000:

            19

        Output:
            19
    */
    cout << *ptr << endl;

    /*
        Evaluate step-by-step:

            &val

        gives:

            0x1000

        Then:

            *(&val)

        means:

            "go to address 0x1000 and read the value"

        which gives:

            19

        Therefore:

            *&val == val

        Output:
            19

        Useful rule:

            *&x == x

        because:

            & gets the address
            * dereferences the address

        They cancel each other out.
    */
    cout << *&val << endl;

    return 0;
}
