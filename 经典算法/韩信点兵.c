#include <stdio.h>
int main()
{
	int x, a, b, c, k;
	int count = 0;
	int flag;
	while(scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		flag = 0;
		count++;
		for(x=10;x<=100 && a<3 && b<5 && c<7;x++)
		{
			if(x%3 == a && x%5 == b && x%7 == c)
			{
				printf("Case %d: %d\n",count,x);
				flag = 1;
				break;
			}
        }
		if (!flag)
			printf("Case %d: No answer\n",count);
	}
	return 0;
}

