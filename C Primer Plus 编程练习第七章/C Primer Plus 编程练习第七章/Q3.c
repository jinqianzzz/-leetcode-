/*������������ż���ĸ�������ƽ��ֵ*/
#include <stdio.h>
int main(void)
{
	int ch;
	int i = 0;
	int j = 0;
	double sum_i = 0;
	double sum_j = 0;

	printf("������0���������������0ֹͣ����\n");
	while (1== scanf("%d",&ch)&&(ch != 0))
	{
		if (ch % 2 == 0)
		{
			i++;
			sum_i += ch;
		}
		else
		{
			j++;
			sum_j += ch;
		}
	}
	if(i>0)
	printf("����%d��ż����ƽ��ֵΪ%lf\n", i, sum_i / i);
	if(j>0)
	printf("����%d��������ƽ��ֵΪ%lf\n", j, sum_j / j);
	return 0;
}