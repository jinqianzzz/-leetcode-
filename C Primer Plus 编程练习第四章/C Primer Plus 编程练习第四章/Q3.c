/*Q3--С�����������ָ���������ֱ��ӡ������*/
#include <stdio.h>
int main(void)
{
	float a;

	scanf("%f", &a);
	printf("The input is %f or %e\n", a, a);
	printf("The input is %+.3f or %.3E\n", a, a);
	return 0;
}