#include <stdio.h>
#include <string.h>
void star(char s[])
{
    // 编写函数，将字符串中所有的小写字母的后面都添加一个星号
    char *p = s;
    while(*p != '\0')
    {
        printf("%c", *p);
        if (*p >= 'a' && *p <= 'z')
            printf("*");
        p++;
    }
}

int main()
{
      char s[100];
      gets(s);
      fflush(stdin);
      star(s);
      return 0;
}
