/*Q6--�޸ĳ���addemup.c2*/
#include <stdio.h>
int main(void)
{
	int day=0;
	int count=0;
	int sum = 0;

	printf("������׬Ǯ������\n");
	scanf("%d", &day);
	while (count++ < day)
	{
		sum += count * count;
	}
	printf("�ܹ�׬��%dԪ\n", sum);
	return 0;
}