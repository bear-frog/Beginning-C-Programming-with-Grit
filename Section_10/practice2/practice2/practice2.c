#include <stdio.h>

int main(void) {
	const int second = 0;
	scanf_s("%d", &second);
	printf("%d:%d:%d", second / 3600, (second % 3600) / 60, (second % 3600) % 60);
}