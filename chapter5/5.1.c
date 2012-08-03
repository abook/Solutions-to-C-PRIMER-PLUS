#include<stdio.h>

int main(void)
{
	const int MIN_PER_H = 60;

	int minites;

	printf("Please enter the number of minites: ");
	scanf("%d", &minites);
	
	while(minites >= 0)
	{
		printf("%d minites is %d hours %d minites\n", minites, 
				minites/MIN_PER_H, minites %MIN_PER_H);
		printf("Please enter another number (<= to quit)");
		scanf("%d", &minites);
	}

	return 0;
}
