#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;


void showBalance(double balance) {
    cout << "Your Balance is: OMR " << setprecision(2) << fixed << balance << endl;
}

double deposit() {
    double amount = 0;

    

    if(amount > 0) {
        return amount;
    }else {
        cout << "Amount" << amount << "is not valid.\n";
        return 0;
    }

    
}

double withdraw(double balance) {

    double amount = 0;

    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;

    if(amount > balance) {
        cout << "Amount larger than balance, try again!\n";
        return 0;
    } else if (amount < 0) {
        cout << "Please Enter a Valid Amount\n";
        return 0;
    }else {
        return amount;
    }

}


int main() {

    double balance = 67;
    int choice = 0;

    do {
        cout << "Enter you choice: \n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();

        fflush(stdin);

        switch(choice) {
            case 1:
                    showBalance(balance);
                    break;
            case 2:
                    balance += deposit();
                    showBalance(balance);
                    break;
            case 3:
                    balance -= withdraw(balance);
                    showBalance(balance);
                    break; 
            case 4: 
                    cout << "Thanks for visiting!\n";
            default: 
                    cout << "Invalid Choice!\n";

            }

    } while (choice != 4);


    return 0;
}
