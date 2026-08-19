#include <stdio.h>

int main(void)
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    int biggest = nums[0];
    for (int i = 1; i < 5; i++)
    {
        if (nums[i] > biggest)
        {
            biggest = nums[i];
        }
    }
    printf("%d\n", biggest);
    return 0;
}
