#include<stdio.h>
int main()
{
	int a[8] = {23,34,76,12,34,89,90,43};
	int i, j, temp;
	
	for (i = 0; i < 8; i++)
		printf("%d\t",a[i]);
	printf("\n");
	for(i = 0; i < 7;i++)
	{
		for(j = 0; j < 7-i;j++ )
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (i = 0; i < 8; i++)
		printf("%d\t",a[i]);
	return 0;
}

