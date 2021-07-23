#include <stdio.h>
#include <windows.h>

void delay()
{
    for (int i = 0; i<10000; i++)
        for(int j=0; j<90000; j++)
                {}
}

int gcd(int a, int b)
{
    if (a==0)
        return b;
    return gcd(b%a, a);
}


int findgcd(int arr[], int n)
{
    int result = arr[0];
    for (int i=1; i<n; i++)
    {
        result = gcd(arr[i], result);
        if (result==1)
            return 1;
    }
    return result;
}

int lcm(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}

int findlcm(int arr[], int n)
{
    int result = arr[0];
    for (int i=0; i<n; i++)
    {
        result=(((arr[i]*result))/(gcd(arr[i], result)));
    }
    return result;
}

int main()
{
    boolean test = 1;
    while (test)
    {
        printf("\n");
        try:
            system("cls");
            int count;
            printf("\tWelcome to LCM and GCD calculator");
            printf("\n\tChoose : \n\t1. Calculate GCD \n\t2. Calculate LCM\n\t3. Exit\n Choice: ");
            int choice;
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("\n\n\tHow many numbers do you wish to enter? ");
                scanf("%d", &count);
                int arr[count];
                for (int i=0; i<count; i++)
                {
                    printf("\n\tEnter number: ");
                    scanf("%d",&arr[i]);
                }
                printf("\n\tArray is full.\n\tCalculating GCD....");
                delay();
                int n = sizeof(arr)/sizeof(arr[0]);
                printf("\n\n\tThe GCD is %d.", findgcd(arr, n)); 
                delay();                
            }
            else if (choice == 2)
            {
                printf("\n\n\tHow many numbers do you wish to enter? ");
                scanf("%d", &count);
                int arr[count];
                for (int i=0; i<count; i++)
                {   
                    printf("\n\tEnter number: ");
                    scanf("%d",&arr[i]);
                }
                printf("\n\tArray is full.\n\tCalculating LCM....");
                int n = sizeof(arr)/sizeof(arr[0]);
                delay();
                printf("\n\n\tThe LCM is %d.", findlcm(arr, n));
                delay();
            }
            else if (choice == 3)
            {
                printf("\n\n\tExiting...");
                delay();
                return 0;
            }
            else
            {
                printf("\n\tInvalid choice.\n\tTry again...");
                delay();
                goto try;
            }
    }
    
}
