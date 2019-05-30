#include<stdio.h>
void delchar(char a[], char c)
{
	char *i, *j;
	for (i = a, j = a; *i != '\0'; i++)
	{
		if (*i != c)
		{
			*j = *i;
			j++;
		}
	}
	for (; *j != '\0'; j++)
	    *j = '\0';
}

int main()
{
	char a[] = "China is wonderful";
	delchar(a, 'w');
	puts(a);
	return 0;
}
