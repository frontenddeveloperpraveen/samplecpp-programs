#include <iostream>

class ATM {
private:
    double balance;

public:
    ATM(double initialBalance) : balance(initialBalance) {}
    void checkBalance() {
        std::cout << "Your account balance is: $" << balance << std::endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "$" << amount << " deposited successfully." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "$" << amount << " withdrawn successfully." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }
};

int main() {
    ATM atm(1000.0);

    int choice;
    double amount;

    while (true) {
        std::cout << "\nATM Menu:" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                std::cout << "Enter the amount to deposit: $";
                std::cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                std::cout << "Enter the amount to withdraw: $";
                std::cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                std::cout << "Thank you for using the ATM. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
