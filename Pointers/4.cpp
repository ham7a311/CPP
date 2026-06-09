#include <iostream>
using namespace std;

/*
    --------------------- Pointers: string, array[] ---------------------

    A pointer stores a MEMORY ADDRESS, not a value.

    &  → "address of" (reference)
    *  → "value at address" (dereference)
*/


int main() {

    string str = "Hello";
    string *ptr = &str;  // You can access string members/functions using the -> operator on a string* (string pointer)
    cout << ptr << endl;  // prints address of string
    cout << *ptr << endl;  // prints the string -> print "Hello"
    cout << ptr->size() << endl;  // get access to the string size and type it by using ->, this prints 5 (the size of "Hello"), you can access more properties/functions not only size()
  

    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr << endl; // 0x61ff00   (some memory address not neccessarely 0x61ff00)
    // so arr → &arr[0]    arr represents the address of the first element

    int *array_ptr = arr;  // pointer to array first element, why first element ? because: arr → &arr[0]    arr represents the address of the first element
    // this means ptr → &arr[0] , the pointer points to the address of the first element 
    cout << *array_ptr << endl; // prints 10

    array_ptr++; // move pointer to next element address, ptr → &arr[1]
    cout << *array_ptr << endl; // prints 20

    ++array_ptr; // move pointer to next element address, ptr -> &arr[2]
    cout << *array_ptr << endl; // prints 30

    array_ptr--; // move pointer to previous element address, ptr -> &arr[1]
    cout << *array_ptr << endl; // prints 20

    --array_ptr; // move pointer to previous element address, ptr -> &arr[0]
    cout << *array_ptr << endl; // prints 10

    /* 
          final output :
                                  10
                                  20
                                  30
                                  20
                                  10
    */
    

    return 0;
}
