#include<stdio.h>
int sum(int x)
{
	int sum = 0;
	while(x>0)
	{
		sum += x%10;
		x /= 10;
	}
	return sum;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("sum = %d\n",sum(a));
	return 0;
}

