#include <stdio.h>
#include <math.h>
#include <locale.h>

void quadratic_equation(int a, int b, int c)
{
	double D, x;

	D = pow(b, 2) - 4.0 * a * c;
	if (D < 0)
		printf("У квадратного уравнения с введенными аргументами нет решений");
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

	printf("Квадратное уравнение имеет вид: a * x^2 + b * x + c = 0 , где a, b, c - числа и a != 0\n\n");
	do {
		printf("Введите значение аргумента a (a!=0): ");
		scanf_s("%d", &a);
	} while (a == 0);
	printf("Введите значение аргумента b: ");
	scanf_s("%d", &b);
	printf("Введите значение аргумента c: ");
	scanf_s("%d", &c);

	quadratic_equation(a, b, c);

	return(0);
}