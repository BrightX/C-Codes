#include<stdio.h>
void fan(int a[], int m, int n)
{
	int temp, i, j, k;
	for(i = m; i <=n; i++)
	{
		k = i;
		for (j = i+1; j <= n; j++)
		{
			if (a[k] > a[j])
			   k = j;
		} 
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
}

int main()
{
    int a[100];
    int m, n, i, j;
    scanf("%d", &m);
    for (i = 0;i < m; i++)
    {
        scanf("%d", &n);
        for(j = 0; j < n; j++)
            scanf("%d", &a[j]);
        fan(a,0,n-1);
        for(j = 0; j < n; j++)
        {
            printf("%d", a[j]);
            if (j != n-1)
                printf(" ");
            else  printf("\n");
        }
    }
    return 0;
}
