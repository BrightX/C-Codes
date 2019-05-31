#include<stdio.h>
#include<math.h>
int sushu(int n)
{	// 判断n是否是素数，如果是，返回1，否则返回0
    int i, flag = 0;
    if (n > 1)
    {
        if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
            flag = 1;
        else if (!(n%2 && n%3 && n%5 && n%7 && n%11))
            flag = 0;
        else
        {
            flag = 1;
            for (i = 2; i <= sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    return flag;
}

int main()
{
    // 令Pi表示第i个素数。现任给两个正整数 m≤n≤1e4，请输出 Pm到 Pn的所有素数。 
    int m, n;
    int i, j, k;
    scanf("%d %d", &m, &n);  //输入在一行中给出m和n，其间以空格分隔。
    if (m <= n && n <= 1e4)
    {
        i = 0;
        j = 0;  // j用于在第m个素数与第n个素数之间的素数个数的计数 
        k = 0;  // k用于所有素数的计数 
        for (; ; i++)
        {
            if(sushu(i))
            {
                k++;
                if ( k>= m && k <= n)
                {
                    printf("%d", i);
                    j++;
                    if (j%10 && n-k)  printf(" ");  // 输出从Pm到Pn的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
                    else  printf("\n");
                }
            }
            if (k > n)
                break;
        }
    }
    return 0;
}
