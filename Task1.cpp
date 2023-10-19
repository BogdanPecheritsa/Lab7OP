#include <stdio.h>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;
	printf("x=");
	scanf_s("%lf", &x);
	printf("y=");
	scanf_s("%lf", &y);
	if ((y <= x + 1) && (y >= 0) && (x <= 0) || (y >= -x + 1) && (x >= 0) || (x >= 0) && (y <= x + 1) || (x >= 0) && (y >= -x + 1) && (y >= 0))
	{
		printf("true");
	}
	else {
		printf("false");
		return 0;
	}
}