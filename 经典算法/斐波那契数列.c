#include<stdio.h>
int main()
{
	int a = 1, b = 1, c, n = 3;
	printf("%d %d ", a, b);
	while(n <= 20)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (n%5 == 0)
		   printf("\n");
		else printf(" ");
		n++;
	}
	return 0;
}
