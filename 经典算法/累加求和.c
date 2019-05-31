#include<stdio.h>
int main()
{
	// 1005: 累加求和
	// 对一组整数累加求和。
	/*
	* 输入
	* 第一行给出一个整数n，表示接下来有n行数据；接下来的每一行先给出一个整数m，表示本行后续还有m个整数，然后再给出m个整数，对这m个整数累加求和。

	* 输出
	* 输出累加和，每个数据占一行。 
	*/
    int n, m, sum, i, j, k;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        sum = 0;
        scanf("%d", &m);
        for(j = 0; j < m; j++)
        {
            scanf("%d", &k);
            sum += k;
        }
        printf("%d\n", sum);
    }
    return 0;
}
