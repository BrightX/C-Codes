#include<stdio.h>
#include<math.h>
int main()
{
    int x, n, y, i, j;
    char c;
    scanf("%d %c", &x, &c);
    n = (sqrt(0.5 * (x + 1)));
    y = x - 2 * n * n + 1;
    for (i = 0; i < 2*n-1; i++)
    {
    	if (i < n)
    	{
    		for (j = 0; j < i; j++)
	    		printf(" ");
    		for (j = 0; j < (2*(n-i)-1); j++)
				printf("%c", c);
	 		printf("\n");
		}
		else
		{
			for (j = 0; j < (2*n-i-2); j++)
	    		printf(" ");
    		for (j = 0; j < (2*(i-n)+3); j++)
				printf("%c", c);
	 		printf("\n");
		}
	}
    printf("%d\n", y); 
    return 0;
}
