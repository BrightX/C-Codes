#include<stdio.h>
int sushu(int n)
{	// �ж�n�Ƿ�������������ǣ�����1�����򷵻�0
    int i, flag = 0;
    if (n > 1)
    {
        flag = 1;
        for (i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main()
{
	// ��Pi��ʾ��i�����������θ����������� m��n��1e4������� Pm�� Pn������������ 
	int m, n;
	int i, j, k;
	scanf("%d %d", &m, &n);  //������һ���и���m��n������Կո�ָ���
	if (m <= n && n <= 1e4)
	{
        i = 0;
		j = 0;  // j�����ڵ�m���������n������֮������������ļ��� 
		k = 0;  // k�������������ļ��� 
		for (; ; i++)
		{
			if(sushu(i))
			{
				k++;
				if ( k>= m && k <= n)
				{
                    printf("%d", i);
					j++;
					if (j%10 && n-k)  printf(" ");  // �����Pm��Pn������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�
					else  printf("\n");
				}
			}
			if (k > n)
			    break;
		}
	}
	return 0;
}
