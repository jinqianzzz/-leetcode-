/*Q1--�����ӱ�ʾ��ʱ��ת��Ϊ���Ӻ�ʱ�ӱ�ʾ��ʱ��*/
#include <stdio.h>
#define PER_HOUR 60
int main(void)
{
	int time = 0;
	printf("������ʱ��/min\n");
	scanf("%d", &time);
	while (time > 0)
	{
		printf("�������ʱ����%dh%dmin\n", time / PER_HOUR, time % PER_HOUR);
		printf("������ʱ�䣬�������0����������\n");
		scanf("%d", &time);
	}
	return 0;
}
