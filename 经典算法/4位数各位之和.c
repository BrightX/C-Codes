#include<stdio.h>
int main()
{
	int a, sum;
	scanf("%d", &a);
	sum = a/1000 + (a%1000)/100 + (a%100)/10 + a%10;
	printf("%d\n", sum);
	return 0;
 } 
