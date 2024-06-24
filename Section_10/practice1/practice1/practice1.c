#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0, y = 0;
	
	printf("두 정수를 입력하세요: ");

	if (scanf_s("%d %d", &x, &y) != 2) {
		return 1;
	}

	printf("AVG: %.2lf\n", (double)(x + y) / 2);

	return 0;
}