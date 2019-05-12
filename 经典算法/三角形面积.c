#include<stdio.h>
#include<math.h>
int main()
{
	double s, d, a, b, c;
	scanf("%lf%lf%lf",&a, &b, &c);
	d = 0.5*(a+b+c);
	s = sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%lf\n",s);
	return 0;
}
