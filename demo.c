#include<stdio.h>
//运算符
int main(void)
{
	int number_1 = 1;
	int number_2 = 2;
	number_1 = number_1 + 1;
	//从新赋值
	int number_3 = number_1 + number_2;
	printf("sum = %d\n", number_1+1);
	printf("sum = %d\n", number_3);

	return 0;

}