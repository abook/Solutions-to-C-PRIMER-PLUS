#include<stdio.h>
void Temperatures(double F);

int main(void)
{
    double F;
    int status;

    printf("Enter the temperature in Fahrenheit: ");

    status = scanf("%lf", &F);

    while (status == 1)
    {
        Temperatures(F);
        printf("Enter the temperature in Fahrenheit (q to quit): ");
        status = scanf("%lf", &F);
    }

    return 0;
}

void Temperatures(double F)
{
    double C, K;

    const double RATE = 1.8;
    const double RES = 32.0;
    const double ABS0 = 273.16;

    C = (F - RES) / RATE;
    K = C + ABS0;
    
    printf("%.2f F = %.2f C = %.2f K\n", F, C, K);
}


