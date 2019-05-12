#include<stdio.h>
int main()
{
	// 输入一个数，判断是否是水仙花数 
	int n;
	scanf("%d",&n);
	if(n >= 100 && n <= 999 && (n == (n/100)*(n/100)*(n/100) 
		+ (n/10%10)*(n/10%10)*(n/10%10)
		+ (n%10)*(n%10)*(n%10)))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
