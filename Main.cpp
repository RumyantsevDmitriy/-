#include <stdio.h>
#include <assert.h>
#include <cctype>
#include <TXLib.h>
#include "myfunctions.h"
#include "myconstants.h"

int main(void)
{
	double a = NAN, b = NAN, c = NAN, root1 = NAN, root2 = NAN;

	printf("Вы открыли программу, решающую квадратные уравнения\nКвадратное уравнение имеет вид: a * x^2 + b * x + c = 0 , где a, b, c - числа\n\n");

    GetData(&a, &b, &c);

	int status_of_programm = SolveSquareEquation(a, b, c, &root1, &root2);

	switch (status_of_programm)
	{
        case NO_ROOT: printf("\nДанное уравнение не имеет решений");
            break;
        case ONE_ROOT: printf("\nДанное уравнение имеет одно решение: x1=x2= %lg", root1);
            break;
        case TWO_ROOT: printf("\nДанное уравнение имеет два решения: x1= %lg\n\t\t\t\t\t\b\b\b\bx2= %lg", root1, root2);
            break;
        case INF_ROOT: printf("\nДанное уравнение иммет бесконечно большое количество решений");
            break;
        case BAD_ENTERED_DATA: printf("Ошибка в введенных данных!!!");
            break;
        case BAD_ROOT_ADDR: printf("Ошибка в адрессе корня (или корней)!!!");
            break;
        default: printf("Ууупс, что-то пошло не так :(");
            break;
	}

	return 0;
}
