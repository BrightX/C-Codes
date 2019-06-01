#include<stdio.h>
int main()
{
	// 输入两个正整数m和n，求其最大公约数。
	int m, n, i;
	scanf("%d%d", &m, &n);
	i = m;
	if(m > n)  i = n;
	while(m%i != 0 || n%i != 0)
		i--;
	printf("%d\n", i);
	return 0;
}
