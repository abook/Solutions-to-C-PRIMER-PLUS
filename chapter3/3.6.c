#include<stdio.h>

int main(void)
{
	float water;
	float molecule = 3.0e-23;
	float quart = 950;

	printf("Please enter the quarts of the water\n");
	scanf("%f", &water);
	printf("There are about %e molecules in %e quater(s) water.\n", water*quart/molecule, water);

	return 0;
}
	
