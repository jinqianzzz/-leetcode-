/*Q3--��=����ת��Ϊ����������*/
#include <stdio.h>
#define PER_WEEK 7
int main(void)
{
	int day = 0;
	printf("����������/day\n");
	scanf("%d", &day);
	while (day > 0)
	{
		printf("%d days are %d weeks,%d days\n", day,day / PER_WEEK, day % PER_WEEK);
		printf("�������������������0����������\n");
		scanf("%d", &day);
	}
	return 0;
}
