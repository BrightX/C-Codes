#include<stdio.h>
#include<math.h>
int main()
{
	// �ж���ȫƽ���� 
	int n;
	scanf("%d", &n);
	if (n >= 0 && n == ((int)sqrt(n))*((int)sqrt(n)))
	    printf("Yes\n");
	else  printf("No\n");
	return 0;
}
