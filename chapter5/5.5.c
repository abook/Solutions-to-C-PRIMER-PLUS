#include<stdio.h>

int main(void)
{
    int count, sum;
    int count_end;

    printf("Enter how many integers will be counted: ");
    scanf("%d", &count_end);

    while (count_end>0)
    {
        count = 0;
        sum = 0;
        while (count ++ < count_end)
            sum = sum + count;
        printf("sum = %d\n", sum);
        
        printf("Enter how many integers will be counted (<=0 to quit): ");
        count_end = 0;
        scanf("%d", &count_end);
    }

    return 0;
}
