#include <stdio.h>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a;
	double result;
	printf("������ �������� a: ");
	if (scanf_s("%lf", &a) != 1) {
		printf("������� ��� ������� �������� a\n");
		return 1;
	}
	result = (a != 0) ? 1.0 / a : 0.0;
	printf("��������� ���������� 1/a: %lf\n", result);
	return 0;
}