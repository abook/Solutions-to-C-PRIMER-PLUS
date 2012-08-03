#include<stdio.h>

int main(void)
{
	const float K_PER_M = 1.609;
	const float L_PER_G = 3.785;

	float m;
	float g;

	printf("Please enter the distance (miles): ");
	scanf("%f", &m);
	printf("Please enter the volume of oil (galons): ");
	scanf("%f", &g);

	printf("The distance is %.1f miles per galon\n", m/g);
	printf("The volume of oil used is %.1f L per 100 kilometers\n",
			L_PER_G*g/K_PER_M/m*100);

	return 0;
}
