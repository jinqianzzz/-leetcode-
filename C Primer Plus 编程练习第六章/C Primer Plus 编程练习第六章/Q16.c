/*Q16--���㸴������������ʱ��*/
#include <stdio.h>
#define Dan_li 0.1
#define Fu_li 0.05
int main(void)
{
	int i = 0;
	double mon_Dap =100;
	double mon_Dei =100;

	for (i = 0; mon_Dei <= mon_Dap; i++)
	{
		mon_Dap += 100 * Dan_li;
		mon_Dei += mon_Dei * Fu_li;
	}
	printf("��Ҫ%d�꣬Deirdre��Ͷ�ʶ��Daphne\n", i);
	printf("��ʱ��Deirdre��%lf   Daphne:%lf", mon_Dei, mon_Dap);
	
	return 0;
}

