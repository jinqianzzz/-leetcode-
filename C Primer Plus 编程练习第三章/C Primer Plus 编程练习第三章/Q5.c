/*Q5--����ת��΢����*/
#include <stdio.h>
#define SEC_PER_YEAR 3.156e+7
int main(void)
{
	float age;

	printf("������������䣺");
	scanf("%f", &age);
	printf("�������Ӧ������Ϊ%e\n", age * SEC_PER_YEAR);
	return 0;
}