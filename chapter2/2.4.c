#include<stdio.h>

void first(void);
void second(void);

int main(void)
{
	first();
	first();
	first();
	second();

	return 0;
}

void first(void)
{
	printf("For he's a jolly good fellow!\n");
}

void second(void)
{
	printf("Which nobody can deny!\n");
}
