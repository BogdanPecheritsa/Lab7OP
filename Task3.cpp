#include <stdio.h>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int X;
	printf("������ ���� ��������� ����� X: ");
	if (scanf_s("%d", &X) != 1) {
		printf("������� ��������.\n");
		return 1;
	}
	(X / 10 == X % 10) ? printf("ֳ �� ����� �������.\n") : printf("ֳ �� ����� ���.\n");
		return 0;
}