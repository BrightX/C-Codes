#include <stdio.h>

int sum_odd(int a[],int n)
{
    // 编写函数，求一维数组中所有奇数的和。
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2)
            sum += a[i];
    }
    return sum;
}

int main()
{
    // 输入7个数据，中间以空格分隔, 输出数据的奇数和
    int num[7];
    int k,ret;
    for(k=0;k<7;k++)
    {
         scanf("%d",&num[k]);
      }
      ret=sum_odd(num,7);
      printf("%d",ret);
      return 0;
}
