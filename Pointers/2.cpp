#include <iostream>
using namespace std;

/*
    --------------------- Pointers: int, float, double ---------------------

    A pointer stores a MEMORY ADDRESS, not a value.

    &  → "address of" (reference)
    *  → "value at address" (dereference)
*/

int main() {

    int integer_value = 10;
    float float_value = 10.5f;
    double double_value = 11.0;

    // Initialize pointers safely (null means "not pointing anywhere yet")
    int* int_ptr = nullptr;
    float* float_ptr = nullptr;
    double* double_ptr = nullptr;

    // Assign valid addresses
    int_ptr = &integer_value;
    float_ptr = &float_value;
    double_ptr = &double_value;

    /*
        ❌ WRONG examples:

        int_ptr = 10;        // error: pointer needs an address
        int_ptr = &10;       // error: cannot take address of literal

        float_ptr = float_value;  // error: float is not an address
    */

    cout << "---------------- OUTPUT ----------------" << endl;

    cout << "int_ptr (address): " << int_ptr << endl;
    cout << "*int_ptr (value): " << *int_ptr << endl;

    cout << "float_ptr (address): " << float_ptr << endl;
    cout << "*float_ptr (value): " << *float_ptr << endl;

    cout << "double_ptr (address): " << double_ptr << endl;
    cout << "*double_ptr (value): " << *double_ptr << endl;

    return 0;
}
