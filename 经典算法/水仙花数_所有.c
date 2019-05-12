#include<stdio.h>
int main()
{
	int a, b, c, i, sum;
	for (i = 100; i < 1000; i++)
	{
		a = i%10;
		b = i/10%10;
		c = i/100;
		sum = a*a*a + b*b*b + c*c*c;
		if (sum == i)  printf("%d\n", i);
	}
	return 0;
}
