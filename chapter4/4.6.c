#include<stdio.h>
#include<float.h>

int main(void)
{
	float a = 1.0/3.0;
	double  b = 1.0/3.0;

	printf("%-20.4f \t %-20.4f\n", a, b);
	printf("%-20.12f \t %-20.12f\n", a, b);
	printf("%-20.16f \t %-20.16f\n", a, b);
	printf("%-20d \t %-20d\n", FLT_DIG, DBL_DIG);

	return 0;
}
