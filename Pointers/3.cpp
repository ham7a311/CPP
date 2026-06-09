#include <iostream>
using namespace std;


int main() {

  char c1 = 'a';
  
  
  char *ptr = nullptr;
  
  ptr = &c1;
  
  cout << ptr << endl;    // ❌ treated as C-string, NOT a safe address print, print anything (unexpected behaviour)
  cout << *ptr << endl;   // ✔ dereference → prints 'a'
  
  /*
  Memory view:
  
      [c1] = 'a'
       ^
       |
      ptr1 (stores address of c1)
  
  ptr = &c;
  
  cout << *ptr
      → go to address stored in ptr
      → read value at that address
      → prints 'a' (normal pointer behavior)
  
  ------------------------------------------------------
  
  cout << ptr (SPECIAL CASE)
  
      Normally, a pointer prints an address like:
          0x61ff0a
  
      BUT for char*:
  
      C++ treats it as a C-style string.
  
      A C-string:
          sequence of characters ending with '\0'
  
      Example:
          char s[] = "hi";
  
          Memory:
              h   i   \0
  
          cout << s prints "hi"
  
  ------------------------------------------------------
  
  What happens here:
  
      ptr points to a single char ('a')
      BUT there is NO '\0' after it
  
  So cout:
      - starts reading at 'a'
      - continues into random memory
      - stops only if it finds '\0'
  
  => This is undefined behavior

     ------------------------------------------------------

    Problem here:

        ptr points to a single char ('a')
        there is NO '\0' after it

        So:
        - may print only 'a'
        - or garbage characters
        - or undefined behavior
  
  ------------------------------------------------------
  
  ✔ Key rule:
  
  char* is only safe with cout if it points to a null-terminated character array.
  */
  

  char c2 = 65; // ASCII value this represents char 'A'
  char *ptr2 = &c2;
  cout << ptr2 << endl;  // ❌ treated as C-string, so it may print unexpected characters or cause undefined behavior if no '\0' is found
  cout << *ptr2 << endl;  // prints ASCII charachter of 65 which is char 'A'


  // SAFE
  char str[] = "hi";
  char* pointer1 = str;
  cout << pointer1 << endl; // prints the address

  // UNSAFE
  char ch = 'h';
  char* pointer2 = &ch;
  cout << pointer2;  // undefined behavior
  return 0;
}
