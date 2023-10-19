#include <stdio.h>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int X;
	printf("Введіть ціле двозначне число X: ");
	if (scanf_s("%d", &X) != 1) {
		printf("Помилка введення.\n");
		return 1;
	}
	(X / 10 == X % 10) ? printf("Ці дві цифри однакові.\n") : printf("Ці дві цифри різні.\n");
		return 0;
}