/*Q14--�ڶ�������Ԫ��Ϊ��һ�������ӦԪ���ۻ�֮��*/
#include <stdio.h>
int main(void)
{
	double arr1[8] = { 0 };
	double arr2[8] = { 0 };
	int i = 0;

	printf("�������һ�������8��Ԫ��\n");
	for (i = 0; i < 8; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	arr2[0] = arr1[0];
	for (i = 1; i < 8; i++)
	{
		arr2[i] = arr2[i - 1] + arr1[i];
	}
	for (i = 0; i<8; i++)
		printf("%10lf   ", arr1[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%10lf   ", arr2[i]);
	return 0;
}