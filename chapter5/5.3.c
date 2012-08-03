#include<stdio.h>

int main(void)
{
	int days;
	
	printf("Please enter the number of days (non-positive to quit): ");
	scanf("%d",&days);
	while(days>0)
	{
		printf("%d days are %d weeks, %d days.\n", days, days/7, days % 7);
		printf("Please enter the number of days (non-positive to quit): ");
        days = 0;   // Without this code, the programme would get
                    // into forever loop when fist enter a number
                    // and then a letter.
		scanf("%d",&days);
	}

	return 0;
}
