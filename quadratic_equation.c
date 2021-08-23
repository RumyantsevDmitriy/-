#include <stdio.h>
#include <math.h>
#include <locale.h>

void quadratic_equation(int a, int b, int c)
{
	double D, x;

	D = pow(b, 2) - 4.0 * a * c;
	if (D < 0)
		printf("� ����������� ��������� � ���������� ����������� ��� �������");
	else if (D == 0)
	{
		x = (-b) * 1.0 / (2.0 * a);
		printf("x1=x2= %f\n", x);
	}

	else
	{
		x = (-b + sqrt(D)) * 1.0 / (2.0 * a);
		printf("x1= %f\n", x);
		x = (-b - sqrt(D)) * 1.0 / (2.0 * a);
		printf("x2= %f", x);
	}
}

int main(void)
{
	system("chcp 1251");
	int a, b, c;

	printf("���������� ��������� ����� ���: a * x^2 + b * x + c = 0 , ��� a, b, c - ����� � a != 0\n\n");
	do {
		printf("������� �������� ��������� a (a!=0): ");
		scanf_s("%d", &a);
	} while (a == 0);
	printf("������� �������� ��������� b: ");
	scanf_s("%d", &b);
	printf("������� �������� ��������� c: ");
	scanf_s("%d", &c);

	quadratic_equation(a, b, c);

	return(0);
}