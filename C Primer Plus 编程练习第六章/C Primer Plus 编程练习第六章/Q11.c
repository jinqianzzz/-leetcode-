/*Q11--�����ӡ8������*/
#include <stdio.h>
int main(void)
{
	int arr[8] = { 0 };
	int i = 0;

	printf("������8������\n");
	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	for (i = 7; i >= 0; i--)
		printf("%d\n", arr[i]);
	return 0;
}