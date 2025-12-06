#include <stdio.h>
#include <string.h>

#define MAX_ATTEMPTS 3
#define PIN "1234"

float balance = 0.0;

// 1. LOGIN FUNCTION
int login() {
    char enteredPIN[10];
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter PIN: ");
        scanf("%s", enteredPIN);

        if (strcmp(enteredPIN, PIN) == 0) {
            return 1;  // login successful
        }

        attempts++;
        printf("Incorrect PIN. Attempts left: %d\n", MAX_ATTEMPTS - attempts);
    }

    return 0; // login failed
}

// 2. SHOW MENU FUNCTION
void showMenu() {
    printf("\n====== ATM MENU ======\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

// 3. CHECK BALANCE
void checkBalance() {
    printf("Current Balance: %.2f\n", balance);
}

// 4. DEPOSIT FUNCTION
void deposit(float amount) {
    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
        return;
    }
    balance += amount;
    printf("Deposited %.2f successfully.\n", amount);
}

// 5. WITHDRAW FUNCTION
void withdraw(float amount) {
    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
        return;
    }
    if (amount > balance) {
        printf("Insufficient balance.\n");
        return;
    }
    balance -= amount;
    printf("Withdrawn %.2f successfully.\n", amount);
}

// MAIN FUNCTION
int main() {
    if (!login()) {
        printf("Access denied. Exiting...\n");
        return 0;
    }

    int choice;
    float amount;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid option. Try again.\n");
        }
    }
}

