/*Q6--��ӡ��ƽ�������йصı��*/
#include <stdio.h>
int main(void)
{
	int max = 0;
	int min = 0;
	int time = 0;

	printf("������������ޣ�");
	scanf("%d", &min);
	printf("������������ޣ�");
	scanf("%d", &max);
	if (min > max)
	{
		printf("������� \n");
	}
	else
	{
		printf("ԭ��           ƽ��           ����\n");
		for (time = min; time <= max; time++)
			printf("%-d		%-d		%-d\n", time, time * time, time * time * time);
	}
	return 0;
}