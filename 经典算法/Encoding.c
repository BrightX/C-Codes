#include<stdio.h>
int main()
{
    int n, num = 0;
    int i, j;
    char a[10001], temp = '\0';
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
    	gets(a);
    	for (j = 0; a[j] != '\0' && a[j] != '\n' && a[j] != EOF; j++)
    	{
    		if (temp != a[j])
    		{
    			if (num > 1)
    			    printf("%d",num);
    			temp = a[j];
    			num = 1;
    			printf("%c", temp);
			}
			else {
				num++;
			}
		}
		if (num > 1)
    	    printf("%d",num);
		printf("\n");
	}
    return 0;
}
