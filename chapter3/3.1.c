#include<stdio.h>

int main(void)
{
	int maxint;
	float minflt, maxflt;

	maxint = 2147483647;
	printf("%d %d %d\n", maxint, maxint+1, maxint +2);
	
	maxflt = 3.4e38 * 100.0f;
	minflt = 3.4e-38 / 2;
	printf("%f %f", maxflt, minflt);

	return 0;
}
