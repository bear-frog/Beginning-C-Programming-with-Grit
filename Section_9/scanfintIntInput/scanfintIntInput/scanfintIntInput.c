#include <stdio.h>

int main(void) {
	int x = 0, y = 0;

	printf("두 정수를 입력하세요: ");

	scanf_s("%d%d", &x, &y);

	printf("두 수의 합은 %d입니다. \n", x + y);

	char ch = 0;
	printf("정수와 문자를 입력 해 주세요 : ");
	scanf_s("%d%c", &x, &ch, 1);
	printf("입력한 수는 %d이고, 문자는 %c입니다. \n", x, ch);

	return 0;
}