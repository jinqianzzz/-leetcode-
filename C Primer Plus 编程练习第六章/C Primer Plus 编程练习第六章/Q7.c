/*Q7--�����ӡ����*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	char arr[20] = { 0 };

	printf("������һ������\n");
	scanf("%s", arr);
	for (i = strlen(arr); i>0; i--)
	{
		printf("%c", arr[i-1]);
	}

	return 0;
}