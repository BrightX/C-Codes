#include<stdio.h>
int main()
{
	// ����һ�������ж��Ƿ���ˮ�ɻ��� 
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
