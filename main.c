#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n % 15 == 0)
    {
        printf("FizzBuzz");
    }
    else if (n % 3 == 0)
    {
        printf("Fizz");
    }
    else if (n % 5 == 0)
    {
        printf("Buzz");
    } else {
        printf("%d", n);
    }

    return 0;
}