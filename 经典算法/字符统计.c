#include<stdio.h>
#include<string.h>
void count(char a[])
{
	int num = 0, spa = 0, let = 0, i=0;
	char *p = a;
	while(i <= strlen(a))
	{
		i++;
		if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
		   let++;
		else if (*p == ' ')
			spa++;
		else if (*p >= '0' && *p <= '9')
			num++;
		p++;
	}
	printf("Space: %d    Letter: %d    Number: %d\n", spa, let, num);
}

int main()
{
	char a[] = "China is very good! 123 456 ";
	count(a);
}
