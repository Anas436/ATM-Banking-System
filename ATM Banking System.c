/* Project Name is 'ATM Banking System' */

#include<stdio.h>

// Take some variables.
int balance = 0; // initial balance zero for everyone.
int anotherTransaction;
int amountToWithdraw;
int amountToDeposit;


void Transaction() // Function create.
{
    int choice;
    printf("\n\n**********Welcome to 'City University of Bangladesh'**********\n");
    printf("\n************My Project Name is 'ATM Banking System'***********\n");

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n <1> Withdraw\n");
    printf("\n <2> Deposit\n");
    printf("\n <3> Balance\n");

    printf("\n\nCreated by-\n\nMd. Anas Mondol\nID:1935202011\nBatch: 52(A)\nProgram: B.Sc in CSE(Day)\nDept. of CSE(CUB)\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("\nPlease enter any options served : ");
    scanf("%d", &choice);


    switch(choice)
    {
        // Withdraw
        case 1:

            printf("\n\nPlease enter amount to withdraw : ");
            scanf("%d", &amountToWithdraw);

            if( amountToWithdraw > balance)
            {
                printf("\nThere is no insufficient balance in your account. Please you have to deposit money.\n");

                printf("\n\n\nDo you want to another transaction?\n\nPress 1 to proceed and 2 to exit: ");
                scanf("%d", &anotherTransaction);

               if(anotherTransaction == 1 )
               {
               Transaction(); // Function call.
               }
            }


            else // balance has something.
           {
              balance= balance - amountToWithdraw;

              printf("\nYou have withdraw = %d\nYour new balance = %d", amountToWithdraw,balance);

              printf("\n\n\nDo you want to another transaction?\n\nPress 1 to proceed and 2 to exit: ");
              scanf("%d", &anotherTransaction);

            if(anotherTransaction == 1 )
            {
            Transaction(); // Function call.
            }
          }

        break;

        // Deposit.
        case 2 :

            printf("\n\nPlease enter amount to deposit : ");
            scanf("%d", &amountToDeposit);

            balance= amountToDeposit + balance;

            printf("\nThank you for Depositing.\n\nYour new balance is : %d", balance);

             // request for another transaction.
             printf("\n\n\nDo you want to another transaction?\n\nPress 1 to proceed and 2 to exit: ");
             scanf("%d", &anotherTransaction);

            if(anotherTransaction == 1 )
            {
            Transaction(); // Function call.
            }

            break;


        // Balance.
        case 3 :

            printf("\n\nYour account balance is : %d\n\nPlease you have to deposit money.", balance);

             // request for another transaction.
             printf("\n\n\nDo you want to another transaction?\n\nPress 1 to proceed and 2 to exit: ");
             scanf("%d", &anotherTransaction);

            if(anotherTransaction == 1)
            {
            Transaction(); // Function call.
            }

            break;

    }

}

int main()
{
    Transaction(); // Function call.

    void anotherTransactionFunction(); // Function create.


    return 0;
}


