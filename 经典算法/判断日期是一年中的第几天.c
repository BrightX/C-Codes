#include<stdio.h>
int main()
{
	// �ж�������һ���еĵڼ���
	int year, mon, day;
	int feb = 28; // ƽ�����28�� 
	int n; // һ���еĵ�n��
	scanf("%d%d%d", &year, &mon, &day);
	
	if ((year%4==0 && year%100!=0) || year%400 == 0)
		feb = 29;  // �������29�� 
	
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
