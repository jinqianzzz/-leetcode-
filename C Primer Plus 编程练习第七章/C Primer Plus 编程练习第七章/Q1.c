/*Q1--ͳ��������ַ�*/
#include <stdio.h>
int main(void)
{
	int space = 0;
	int enter = 0;
	int other = 0;
	char c;

	printf("���ڿ�ʼ�������룬����#��ֹͣ����\n");
	while ((c = getchar()) != '#')
	{
		if (c ==' ')
		{
			space++;
		}
	    else if(c =='\n')
		{
			enter++;
		}
		else
		{
			other++;
		}
	}
	printf("��ȡ�ո���%d��\n��ȡ���з���%d��\n��ȡ�����ַ�%d��\n", space, enter, other);
	return 0;
}
