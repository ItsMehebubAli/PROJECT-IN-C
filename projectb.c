#include <stdio.h>
int main(int argc, char const *argv[])
{
    int atm_pin = 1234, n, respons, deposite, withdrawal;
    char YnN;
    float savings = 2000.00;
    printf("ENTER YOUR 4-DIGIT PINCODE\n");
    scanf("%d", &n);
    if (n == atm_pin)
    {
        printf("HELLO! WELCOME TO OUR ATM SERVICES\n");
    r1:
        printf("ENTER 1:BALANCE CHECKING\n");
        printf("ENTER 2:CASH WITHDRAWAL\n");
        printf("ENETR 3:CASH DEPOSITION\n");
        printf("ENTER 4:EXIT\n");
        printf("***********************************************************************\n");
        scanf("%d", &respons);
        if (respons == 1)
        {
            printf("YOUR CURRENT BALANCE IN RS :%0.2f\a\n", savings);
            printf("___________________________\n");
            printf("________________________________________________________\n");
            printf("WOULD YOU LIKE TO HAVE ANOTHER ATM TRANSACTION?(y/n)\n");
            scanf(" %c", &YnN);
            if (YnN == 'y' || YnN == 'Y')
            {
                goto r1;
            }
            else if (YnN == 'n' || YnN == 'N')
            {
                printf("THANKS FOR USING OUR SERVCES\n");
            }
            else if (YnN != 'y' || YnN != 'Y' && YnN != 'N' || YnN != 'Y')
            {
                printf("THE RESPONSE WAS INVALID\n");
                printf("THANKS FOR USING OUR SERVCES\n");
            }
        }
        else if (respons == 2)
        {
            printf("ENTER THE AMOUNT YOU WANT TO WITHDRAWAL(The withdrawal amount should be multiple of 100)\n");
            scanf("%d", &withdrawal);
            if (withdrawal % 100 == 0 && withdrawal <= savings)
            {
                savings = savings - withdrawal;
                printf("UPDATED AMOUNT IN YOUR SAVING ACCOUNT:%0.2f\n", savings);
                printf("___________________________\n");
                printf("________________________________________________________\n");
                printf("WOULD YOU LIKE TO HAVE ANOTHER ATM TRANSACTION?(y/n)\n");
                scanf(" %c", &YnN);
                if (YnN == 'y' || YnN == 'Y')
                {
                    goto r1;
                }
                else if (YnN == 'n' || YnN == 'N')
                {
                    printf("THANKS FOR USING OUR SERVCES\n");
                }
                else if (YnN != 'y' || YnN != 'Y' || YnN != 'N' || YnN != 'Y')
                {
                    printf("THE RESPONSE IS INVALID\n");
                    printf("THANKS FOR USING OUR SERVCES\n");
                }
            }
            else if (withdrawal % 100 != 0)
            {
                printf("THE ENTERED AMOUNT IS NOT A MULTIPLE OF 100\n");
                printf("THANKS FOR USING YOUR SERVCES\n");
            }
            else if (withdrawal > savings)
            {
                printf("YOUR ACCOUNT BALANCE IS LESS\n");
                printf("THANKS FOR USING OUR SERVCES\n");
            }
        }
        else if (respons == 3)
        {
            printf("INSERT AND ENTER THE AMOUNT YOU WANT TO DEPOSITE TO YOUR SAVING ACCOUNT\n");
            scanf("%d", &deposite);
            printf("\n");
            savings = savings + deposite;
            printf("UPDATED AMOUNT IN YOUR SAVING ACCOUNT:%0.2f\n", savings);
            printf("___________________________\n");
            printf("________________________________________________________\n");
            printf("WOULD YOU LIKE TO HAVE ANOTHER ATM TRANSACTION?(y/n)\n");
            scanf(" %c", &YnN);
            if (YnN == 'y' || YnN == 'Y')
            {
                goto r1;
            }
            else if (YnN == 'n' || YnN == 'N')
            {
                printf("THANKS FOR USING OUR SERVCES\n");
            }
            else if (YnN != 'y' || YnN != 'Y' || YnN != 'N' || YnN != 'Y')
            {
                printf("THE RESPONSE IS INVALID\n");

                printf("THANKS FOR USING OUR SERVCES\n");
            }
        }
        else if (respons == 4)
        {
            printf("THANKS FOR USING OUR SERVCES\n");
        }
    }
    else 
    {
        printf("THE PINCODE IS INVALID\n");
    }

    return 0;
}
