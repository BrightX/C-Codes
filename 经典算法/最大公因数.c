#include<stdio.h>
int main()
{
	int a, b, i;
	printf("输入两个数：");
	scanf("%d%d", &a, &b);
	i = a;
	if(a > b)  i = b;
	while(a%i != 0 || b%i != 0)
        i--;
	printf("%d和%d的最大公因数为：%d\n", a, b, i);
	return 0;
}
