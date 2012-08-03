#include<stdio.h>
#define ratio 5 // I don't know the exact ratio.
int main(void)
{
	float height;
	char name[40];

	printf("Please enter your name: ");
	scanf("%s", name);

	printf("Please enter your height (in): ");
	scanf("%f", &height);

	printf("%s, you are %.3f feet tall.\n", name, height/ratio);

	return 0;
}
