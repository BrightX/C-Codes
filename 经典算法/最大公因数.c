#include<stdio.h>
int main()
{
	int a, b, i;
	printf("������������");
	scanf("%d%d", &a, &b);
	i = a;
	if(a > b)  i = b;
	while(a%i != 0 || b%i != 0)
        i--;
	printf("%d��%d���������Ϊ��%d\n", a, b, i);
	return 0;
}
