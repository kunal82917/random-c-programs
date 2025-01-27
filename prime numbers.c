#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    printf("enter the number:\n");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("number is not prime\n");
        return 0;
    }

    int isPrime = 1;

    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime");
    }

    return 0;
}
