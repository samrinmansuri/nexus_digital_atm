#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

// Function Prototypes
void displayDateTime();
int verifyPin(int pin);
void showMenu();
float withdraw(float balance);
float deposit(float balance);
void checkBalance(float balance);

int main()
{
    int pin = 9876;
    int option;
    int continue_transaction = 1;
    float balance = 8765;

    displayDateTime();

    printf("\n\t\t\t**** WELCOME TO HDFC BANK ****\n");
    