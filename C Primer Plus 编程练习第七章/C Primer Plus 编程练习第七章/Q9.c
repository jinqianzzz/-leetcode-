/*Q9--��ʾ����С��������������*/
#include <stdio.h>
int main(void)
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 1;

	printf("������������(����0�˳���\n");
    while ((scanf("%d", &num) == 1) && (num > 0))
	{
		for (i = 2; i <= num; i++)//��������С�ĳ�1���������һ�����Ƿ�Ϊ����
		{
			k = 0;
			for (j = 2; j *j<=i; j++)
			{
                if (i % j == 0)
                {
                    k=1;
                    break;
                }
			}
			if (k==0)
				printf("%d   ", i);
		}
	}
	return 0;
}


