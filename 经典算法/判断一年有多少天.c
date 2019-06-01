#include<stdio.h>
int main()
{
	// 输入一个年份，输出该年有多少天。
	int year;
	scanf("%d", &year);
	printf("%d\n", ( (!(year % 4) && (year % 100)) || !(year % 400) ) ? 366 : 365);
	return 0;
}
