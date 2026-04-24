#include <iostream>
using namespace std;

/* 
Exercise 1 – Write a C++ program to input month number and print
            total number of days in month using switch...case. 
            Example: 
            INPUT:
                    Input month number: 3
            OUTPUT:
                    Total number of days: 31
*/

int main() {
    int month;
    
    cout << "Input month number: ";
    cin >> month;

    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "Total number of days: 31";
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "Total number of days: 30";
            break;

        case 2: // February
            cout << "Total number of days: 28 or 29 (leap year)";
            break;

        default:
            cout << "Invalid month number!";
    }

    return 0;
}


/* 
Exercise 2 – Write a C++ program to input an alphabet and check
            whether it is vowel or consonant using switch case. 
            Example: 
            INPUT:
                    Input alphabet: c
            OUTPUT:
                    'c' is consonant
*/

int main() {
    char ch;

    cout << "Input alphabet: ";
    cin >> ch;

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "'" << ch << "' is vowel";
            break;

        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                cout << "'" << ch << "' is consonant"; // insure input is a letter
            else
                cout << "Invalid input!"; // print this if input is not letter
    }

    return 0;
}


/* 
Exercise 3 – Write a C++ program that asks the user to input the marks of one subject.
            The program should calculate the grade according to following:
                            Percentage >= 90% : Grade A
                            Percentage >= 80% : Grade B
                            Percentage >= 70% : Grade C
                            Percentage >= 60% : Grade D
                            Percentage >= 40% : Grade E
                            Percentage < 40% : Grade F
                                    Use: switch
*/

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    switch(marks) {

        case 90 ... 100:
            cout << "Grade A";
            break;

        case 80 ... 89:
            cout << "Grade B";
            break;

        case 70 ... 79:
            cout << "Grade C";
            break;

        case 60 ... 69:
            cout << "Grade D";
            break;

        case 40 ... 59:
            cout << "Grade E";
            break;

        case 0 ... 39:
            cout << "Grade F";
            break;

        default:
            cout << "Invalid marks";
    }

    return 0;
}


/* 
Exercise 4: Write a C++ program that asks the user how many credits they have taken.
            If they have taken 23 or less, print that the student is a freshman.
            If they have taken between 24 and 53, print that they are a sophomore.
            The range for juniors is 54 to 83, and for seniors it is 84 and over.
                                    Use: switch
*/

int main() {
    int credits;

    cout << "Enter number of credits: ";
    cin >> credits;

    switch(credits) {

        case 0 ... 23:
            cout << "Student is a Freshman";
            break;

        case 24 ... 53:
            cout << "Student is a Sophomore";
            break;

        case 54 ... 83:
            cout << "Student is a Junior";
            break;

        case 84 ... 10000:   // large upper bound for seniors
            cout << "Student is a Senior";
            break;

        default:
            cout << "Invalid input";
    }

    return 0;
}
