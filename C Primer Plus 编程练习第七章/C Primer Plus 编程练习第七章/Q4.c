/*Q4--��������ַ������滻*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;

	printf("�������ַ�������#ֹͣ����\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		else if (ch =='!')
		{
			printf("!!");//ע��˴��������ַ�,��printf����
			i++;
		}
		else
			putchar(ch);
	}
	printf("һ��������%d���滻\n", i);
	return 0;
}