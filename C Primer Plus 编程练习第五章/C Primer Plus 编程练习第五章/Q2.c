/*Q2--��ӡ�����������������10���������������*/
#include <stdio.h>
int main(void)
{
	int num = 0;
	int end = 0;

	printf("������һ������\n");
	scanf("%d", &num);
	end = num+10;
	while (num <= end)
	{
		printf("%d	", num);
		num++;
	}
	return 0;
}