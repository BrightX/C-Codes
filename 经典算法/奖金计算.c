#include<stdio.h>
int main()
{
	// ½±½ð¼ÆËã
	long m, n;
	scanf("%ld", &m);
	if (m<=1e5)  n = m*10/100;
	else if (m>1e5&&m<=2e5)  n = 1e4 + (m-1e5)*75/1000;
	else if (m>2e5&&m<=4e5)  n = 1e4 + 1e5*75/1000 + (m-2e5)*5/100;
	else if (m>4e5&&m<=6e5)  n = 1e4 + 1e5*75/1000 + 2e5*5/100 + (m-4e5)*3/100;
	else if (m>6e5&&m<=1e6)  n = 1e4 + 1e5*75/1000 + 2e5*5/100 + 2e5*3/100 + (m-6e5)*15/1000;
	else if (m>1e6)  n = 1e4 + 1e5*75/1000 + 2e5*5/100 + 2e5*3/100 + 4e5*15/1000 + (m-1e6)/100;
	printf("%ld\n", n);
	return 0;
}
