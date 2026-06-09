#include <iostream>
using namespace std;


int main() {

  char c = 'a';
  
  char *ptr = nullptr;
  ptr = &c;
  
  cout << ptr << endl;    // ❌ treated as C-string, NOT a safe address print
  cout << *ptr << endl;   // ✔ dereference → prints 'a'
  
  /*
  Memory view:
  
      [c] = 'a'
       ^
       |
      ptr (stores address of c)
  
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
  
  ✔ Key rule:
  
  char* is only safe with cout if it points to a null-terminated character array.
  */

  return 0
}
