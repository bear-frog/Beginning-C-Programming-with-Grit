#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[100] = "";
	int age = 0;

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	
	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", name, (unsigned)_countof(name));

	printf("����� ���̴� %d���̰� �̸��� \'%s\' �Դϴ�.", age, name);

	return 0;
}