#include<stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age (years):______\b\b\b\b");
	scanf("%d", &age);
	printf("You have survived %e seconds.\n", 3.156e7*age);
	
	return 0;
}
