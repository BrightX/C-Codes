#include<stdio.h>
int main()
{
	// 判断日期是一年中的第几天
	int year, mon, day;
	int feb = 28; // 平年二月28天 
	int n; // 一年中的第n天
	scanf("%d%d%d", &year, &mon, &day);
	
	if ((year%4==0 && year%100!=0) || year%400 == 0)
		feb = 29;  // 闰年二月29天 
	
	if (mon == 1)  n = day;
	else if (mon == 2) n = 31 + day;
	else if (mon == 3) n = 31 + day + feb;
	else if (mon == 4) n = 31 + day + feb + 31;
	else if (mon == 5) n = 31 + day + feb + 31 + 30;
	else if (mon == 6) n = 31 + day + feb + 31 + 30 + 31;
	else if (mon == 7) n = 31 + day + feb + 31 + 30 + 31 + 30;
	else if (mon == 8) n = 31 + day + feb + 31 + 30 + 31 + 30 + 31;
	else if (mon == 9) n = 31 + day + feb + 31 + 30 + 31 + 30 + 31 + 31;
	else if (mon == 10) n = 31 + day + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	else if (mon == 11) n = 31 + day + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
	else if (mon == 12) n = 31 + day + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
	
	printf("%d\n", n);
	return 0;
}
