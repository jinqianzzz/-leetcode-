/*Q4--��ӡ���������*/
#include <stdio.h>
int main(void)
{
	char name[20] = { 0 };
	float height = 0;

	printf("�������������\n");
	scanf("%s", name);
	printf("�����������ߣ�cm��\n");
	scanf("%f", &height);
	printf("%s,you are %f metre tall \n", name, height / 100);
	return 0;
}