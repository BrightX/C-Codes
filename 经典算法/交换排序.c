#include<stdio.h>
int main()
{
	int a[10] = {12,23,54,34,23,12,34,56,76,89};
	int i, j, temp;
	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	for (i = 0;i < 9;i++)
	{
		for (j = i;j<10;j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
