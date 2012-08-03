#include<stdio.h>
void cubic(float a);

int main(void)
{
    printf("Please enter a float number: ");
    float a;
    scanf("%f", &a);
    cubic(a);
}

void cubic(float a)
{
    printf("%.3f^3 = %.3f\n", a, a*a*a);
}
