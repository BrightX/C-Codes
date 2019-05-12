#include<stdio.h>
#include<string.h>
void pud(char a[])
{
	int i, temp;
	int len = strlen(a);
	for (i = 0; i < len/2;i++)
	{
		temp = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = temp;
	}
} 

int main()
{
	char a[] = "China is great";
	pud(a);
	printf("%s",a);
	return 0;
}
