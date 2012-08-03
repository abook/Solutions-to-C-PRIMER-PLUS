#include<stdio.h>

int main(void)
{
	int no;
	printf("Please enter a positive integer.\n");
	scanf("%d", &no);
	printf("The character cooresponds to number %d is \"%c\".\n", no, no);

	return 0;
}
