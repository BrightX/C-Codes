#include <stdio.h>
int main()
{
    int x, y;
    for (x = 1; x <= 97; x++)
    {
        y = 98 - x;
        if (x + y == 98 && 2*x + 4*y == 386)
        {
            printf("����Ϊ: %d    ����Ϊ: %d\n", x, y);
            break;
        }
    }
    return 0;
}
