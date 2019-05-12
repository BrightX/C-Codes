#include<stdio.h>
void delchar(char a[], char c)
{
	char *i, *j;
	for (i = a; *i != '\0'; i++)
	{
		if (*i == c)
		{
			for (j = i; *j != '\0'; j++)
				*j = *(j+1);
		}
	}
}

int main()
{
	char a[] = "China is wonderful";
	delchar(a, 'i');
	printf("%s",a);
	return 0;
}
