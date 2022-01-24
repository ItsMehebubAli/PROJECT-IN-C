#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int card_num;
    int digit=0, n, a, y;
    printf("WELCOME TO OUR BANKING SERVICES\n");
    printf("-------------*-------------*---------------\n");
r1:
    printf("ENTER YOUR CREDIT/DEBIT CARD NUMBER\n");
    scanf("%lld", &card_num);
    // printf("%lld\n", card_num);
    long long int num = card_num;
    while (card_num != 0)
    {
        n = card_num % 10;
        card_num = card_num / 10;
        digit = digit + 1;
            //printf("%d\n", digit);

    }
    //printf("%d\n", digit);
    y = digit;
    if (digit >= 13)
    {
        a = 0;
        n = 0;
        int odd_sum = 0;
        int even_sum = 0;
        int cardnum[digit];
        while (a < digit)
        {
            n = num % 10;
            cardnum[a] = n;
            num = num / 10;
            a = a + 1;
        }
        /*for(int i=0;i<=digit;i++)
        {
            printf("%d\n",cardnum[i]);
        }*/
        a = 0;
        while (a < digit)
        {

            odd_sum = odd_sum + cardnum[a];
            // printf("%d\n",odd_sum);
            a = a + 2;
        }
        a = 1;
        while (a < digit)
        {
            int b = cardnum[a];
            if ((b * 2) <= 9)
            {
                even_sum = even_sum + b * 2;
            }
            else if (b * 2 > 9)
            {
                n = 0;
                int c = b * 2;
                n = n + c % 10;
                c = c / 10;
                n = n + c;
                even_sum = even_sum + n;
            }
            a = a + 2;
        }
        int z = even_sum + odd_sum;
        //printf("%d\n",z);
        z = z % 10;
        //printf("%d\n", z);
        a = cardnum[digit-1] * 10 + cardnum[(digit - 2)];
       // printf("%d\n", cardnum[y]);

        if (z == 0 && digit == 15 && (a == 34 || a == 37))
        {
            printf("AMERICAN EXPRESS\n");
        }
        else if (z == 0 && (a == 51 || a == 52 || a == 53 || a == 54 || a == 55) && digit == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (z == 0 && cardnum[digit-1] == 4 && (digit == 13 || digit == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVAID\n");
        }
    }

    else
    {
        printf("YOUR CARD NUMBER IS INVALID\n");
        goto r1;
    }
    return 0;
}
