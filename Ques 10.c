/*
Q10. ATM Transaction System
*/

#include <stdio.h>

int main()
{
    float balance = 10000;
    float amount;
    int choice;

    float transactions[5];
    int transactionCount = 0;

    do
    {
        printf("\n\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Display Last Five Transactions");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Balance = %.2f", balance);
        }

        else if(choice == 2)
        {
            printf("Enter amount: ");
            scanf("%f", &amount);

            balance += amount;

            if(transactionCount < 5)
            {
                transactions[transactionCount] = amount;
                transactionCount++;
            }
        }

        else if(choice == 3)
        {
            printf("Enter amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance -= amount;

                if(transactionCount < 5)
                {
                    transactions[transactionCount] = -amount;
                    transactionCount++;
                }

                printf("Withdrawal successful.");
            }
            else
            {
                printf("Insufficient balance.");
            }
        }

        else if(choice == 4)
        {
            printf("\nLast five transactions:");

            for(int i = 0; i < transactionCount; i++)
            {
                if(transactions[i] > 0)
                    printf("\nDeposited: %.2f", transactions[i]);
                else
                    printf("\nWithdrawn: %.2f", -transactions[i]);
            }
        }

    } while(choice != 5);

    return 0;
}
