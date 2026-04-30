#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int val = rand() % 95 + 32;  // 32–126 (printable ASCII)

    cout << static_cast<char>(val);

    return 0;
}
