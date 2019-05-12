#include<stdio.h>
void pud(int a[], int n)
{
	int temp, i;
	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
}

int main()
{
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 9, i;
	pud(a, n);
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
	return 0;
}
