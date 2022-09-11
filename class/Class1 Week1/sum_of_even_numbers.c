#include <stdio.h>

int main()
{
    int from_one_to_number;
    int sum = 0;
    while (1)
    {
        sum = 0;
        printf("Sum of even from one to: ");
        scanf("%d", &from_one_to_number);
        for (int i = 0; i <= from_one_to_number; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
                printf("%d ", i);
            }
        }
        printf("\nAnswer is %d \n", sum);
    }
    return 0;
}