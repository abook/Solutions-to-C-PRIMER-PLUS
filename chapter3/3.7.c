#include<stdio.h>

int main(void)
{
	float k = 2.54;
	float height;

	printf("Plear enter the height of you (in inch).\n");
	scanf("%f", &height);
	printf("You are as tall as %3.2f cm.\n", height*k);

	return 0;
}
