#include<stdio.h>

int main(void)
{
	char name[40];
	char surname[40];

	printf("Please enter your first name: \n");
	scanf("%s", name); // 这里有一个问题，如果输入的是中文，那么 backspace 每次只能删除半个字符
	printf("Please enter your family name: \n");
	scanf("%s", surname);

	printf("Your name is: %s, %s\n", name, surname);

	return 0;
}
