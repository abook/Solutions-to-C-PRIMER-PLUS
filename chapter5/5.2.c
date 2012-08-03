#include<stdio.h>

int main(void)
{
	int input;

	printf("Please enter an integer:\n");
	scanf("%d",&input);
	int temp = input;

	while(input<=temp+10)
	{
		printf("%d ",input);
		input++;
	}
	
	printf("\n");

	return 0;
}
