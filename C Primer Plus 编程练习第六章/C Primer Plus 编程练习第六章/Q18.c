/*Q18--��������ֱ�������˰���*/
#include <stdio.h>
#define Dunbar_s_number 150
int main(void)
{
	int num = 5;
	int week = 1;

	for (week = 1; num <= 150; week++)
	{
		num = (num - week) * 2;
		if (num <= 150)
			printf("��%d����%d������\n", week, num);
	}
	printf("��%d���Ѿ������˵˰���\n",week-1);
	return 0;
}
