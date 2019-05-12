#include<stdio.h>
int gcd(int a, int b)
{
	return b==0? a:gcd(b, a%b);
}
int main()
{
	// 利用辗转相除法求最大公约数
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
	return 0;
}
