#include<stdio.h>

int main(void)
{
	char name[40];

	printf("Please enter your name: __________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s", name);
	// 这里有一个问题，如果入的字符串含有空格，
	// 那么空格后的会自动忽略，如何改进？

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"   %s\"\n", name); // 有无其它优雅的方式？

	return 0;
}
