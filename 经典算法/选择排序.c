#include<stdio.h>
int main()
{
	int a[10] = {13,23,4,56,53,24,78,98,76,56};
	int i, j, m, temp;
	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	printf("\n");


	for (i = 0; i < 9; i++)
	{
		m = i;
		for (j = i+1; j < 10; j++)
		{
			if (a[m] > a[j])    //易错点：是a[m],不是a[i] 
			   m = j;
		}
		if (m != i)
		{
			temp = a[i];
			a[i] = a[m];
			a[m] = temp;
		}
	}
	
	
	for (i = 0; i < 10; i++)
		printf("%d\t",a[i]);
	return 0;
}
