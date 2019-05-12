#include<stdio.h>
#include<math.h>
int main()
{
	double l, x, y, m, n;
	printf("请输入第一个点坐标x,y:");
	scanf("%lf,%lf", &x, &y);
	getchar();
	printf("请输入第二个点坐标m,n:");
	scanf("%lf,%lf", &m, &n);
	l = sqrt((x - m)*(x - m) + (y - n)*(y - n));
	printf("距离l为：%lf\n", l);
	return 0;
 } 
