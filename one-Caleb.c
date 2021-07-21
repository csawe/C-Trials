#include <stdio.h>
#include <windows.h>

void gcd()
{
    int a=0,b=0;
    printf("\n");
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    int i,j;
    int divisorOne=0, divisorTwo=0;
    int gcd=0;
    for (i=1; i<a; i++)
    {
        if((a%i) == 0)
        {
            divisorOne = i;
        }
        for (j=1    ; j<b; j++)
        {
            if ((b%j) == 0)
            {
                divisorTwo = j;
                if (divisorOne == divisorTwo)
                    gcd = divisorOne;
            }
        }
    }
    if (gcd == 0)
    {
        printf("The two numbers do not have a GCD !!!\n");
    }
    else
    {
        printf("The GCD is %d.\n", gcd);
    }
    for (int x = 0; x<10000; x++)
        for(int y=0; y<90000; y++)
            {}
    return;
}

void lcm()
{
    int a=0,b=0;
    printf("\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int i,j;
    int productOne=0, productTwo=0;
    int lcm=0;
    for (i=0; i<a; i++)
    {   
        productOne = a*i;
        for (j=0; j<b; j++)
        {
            productTwo = b*j;
            if (productOne == productTwo)
                lcm = productOne;
                break;
        }
    }
    if (lcm==0)
        lcm = a*b;
    printf("\nThe LCM is %d.\n", lcm);
    for (int x=0; x<10000; x++)
        for(int y=0; y<90000; y++)
            {}
    return;
}

int main()
{
    boolean test = 1;
    while (test)
    {
        printf("\n");
        try:
            system("cls");
            printf("Welcome to LCM and GCD calculator");
            printf("\nChoose : \n\t1. Calculate GCD \n\t2. Calculate LCM\n\t3. Exit\n Choice: ");
            int choice;
            scanf("%d", &choice);
            if (choice == 1)
                gcd();
            else if (choice == 2)
                lcm();
            else if (choice == 3)
            {
                printf("\n\n\tExiting...");
                for (int i = 0; i<10000; i++)
                    for(int j=0; j<90000; j++)
                    {}
                return 0;
            }
            else
            {
                printf("\n\tInvalid choice.\n\tTry again...");
                for (int i = 0; i<10000; i++)
                    for(int j=0; j<90000; j++)
                    {}
                goto try;
            }
    }
    
}