/*Q6--������ĸ�������ն���*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char surname[10] = { 0 };
	char name[10] = { 10 };

	printf("��������\n");
	scanf("%s", name);
	printf("��������\n");
	scanf("%s", surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
	return 0;
}