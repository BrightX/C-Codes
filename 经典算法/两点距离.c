#include<stdio.h>
#include<math.h>
int main()
{
	double l, x, y, m, n;
	printf("�������һ��������x,y:");
	scanf("%lf,%lf", &x, &y);
	getchar();
	printf("������ڶ���������m,n:");
	scanf("%lf,%lf", &m, &n);
	l = sqrt((x - m)*(x - m) + (y - n)*(y - n));
	printf("����lΪ��%lf\n", l);
	return 0;
 } 
