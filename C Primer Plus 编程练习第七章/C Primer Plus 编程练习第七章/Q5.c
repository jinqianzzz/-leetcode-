/*Q5--��switch��дQ4*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;

	printf("�������ַ�������#ֹͣ����\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			i++;
			continue;
		case'!':
			printf("!!");//ע��˴��������ַ�,��printf����
			i++;
			continue;
		default:
			putchar(ch);
		}
	}
	printf("һ��������%d���滻\n", i);
	return 0;
	return 0;
}