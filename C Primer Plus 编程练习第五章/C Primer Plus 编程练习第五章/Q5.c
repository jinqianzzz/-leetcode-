/*Q5--�޸ĳ���addemup.c*/
#include <stdio.h>
int main(void)
{
	int day = 0;
	int sum = 0;
	int count = 0;

	printf("������׬Ǯ������:\n");
	scanf("%d", &day);
	while (count++ < day)
	{
		sum += count;
	}
	printf("�ڸ������й�׬��%dԪ", sum);
	return 0;
}