/*Q5--Ƕ��ѭ���Խ������δ�ӡ��ĸ*/
#include <stdio.h>
int main(void)
{
	int row = 0;
	int line = 0;
	int space = 0;
	char target;
	char a = 'A';

	printf("������һ����д��ĸ:");
	scanf("%c", &target);
	for (row = 0; row < target - 'A' + 1; row++)
	{
		for (space = target - 'A'-row; space >0 ; space--)
		{
			printf(" ");
		}
		for (line = 0,a='A'; line < row + 1; line++,a++)
			{
				printf("%c", a);
			}
		for (line = 0,a= 'A'-1+row; line < row; line++, a--)
			{
				printf("%c", a);
			}
		printf("\n");
	}
	
	return 0;
}