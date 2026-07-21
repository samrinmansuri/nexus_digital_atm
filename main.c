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
    
    // Verify PIN
    if(!verifyPin(pin))
    {
        return 0; 
    }

     // Transaction Menu
    while(continue_transaction)
    {
        showMenu();

        printf("\n\t\tSelect an option : ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                balance = withdraw(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                checkBalance(balance);
                break;

            default:
                Beep(500,450);
                printf("\n\t\tInvalid Option!");
        }

        printf("\n\n\t\tDo you want another transaction?");
        printf("\n\t\tPress 1 [Yes], 0 [No] : ");
        scanf("%d", &continue_transaction);
    }

    printf("\n\n\t\t**** Thank You for Banking with HDFC BANK ****\n");

    return 0;
}


// Function to Display Date & Time
void displayDateTime()
{
    time_t now;
    time(&now);

    printf("\n");
    printf("\t\t\t\t%s", ctime(&now));
}
