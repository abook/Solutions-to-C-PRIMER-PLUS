#include<stdio.h>
#include<string.h>

int main(void)
{
	char fname[40];
	char lname[40];

	printf("Please input your first name\n");
	scanf("%s", fname);
	printf("Please input your last name\n");
	scanf("%s", lname);

	int lf = strlen(fname);
	int ll = strlen(lname);
	printf("\n%s\t%s\n", fname, lname);
	printf("%*d\t%*d\n", lf, lf, ll, ll);


	printf("\n%s\t%s\n", fname, lname);
	printf("%-*d\t%-*d\n", lf, lf, ll, ll);
	return 0;
}
