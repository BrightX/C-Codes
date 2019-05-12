#include<stdio.h>
int main()
{
    int i, flat, n;
    scanf("%d", &n);
    if (n > 1)
    {
        flat = 0;
        for (i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flat = 1;
                break;
            }
        }
        if (flat == 0) printf("Yes");
        else  printf("No");
    }
    else
        printf("No");
    return 0;
}
