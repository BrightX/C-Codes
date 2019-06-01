#include<stdio.h>
int main()
{
    // 输入一个整数,判断其是否为素数,如果是则输出 Yes,否则输出 No。
    int i, flag, n;
    scanf("%d", &n);
    if (n > 1)
    {
        flag = 0;
        for (i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("Yes");
        else  printf("No");
    }
    else
        printf("No");
    return 0;
}
