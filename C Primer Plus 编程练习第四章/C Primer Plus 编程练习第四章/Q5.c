/*Q5--�����ļ�����ʱ��*/
#include <stdio.h>
int main(void)
{
	float speed=0;
	float size=0;

	printf("�������ļ��������ٶȣ�Mb/s��\n");
	scanf("%f", &speed);
	printf("�������ļ���С\n");
	scanf("%f", &size);
	printf("At %.2f megabits per second ,a file of %.2f megabytes\n", speed, size);
	printf("downloads in %.2f seconds", size * 8 / speed);
	return 0;

}