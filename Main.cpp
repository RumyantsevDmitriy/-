#include <stdio.h>
#include <assert.h>
#include <cctype>
#include <TXLib.h>
#include "myfunctions.h"
#include "myconstants.h"

int main(void)
{
	double a = NAN, b = NAN, c = NAN, root1 = NAN, root2 = NAN;

	printf("�� ������� ���������, �������� ���������� ���������\n���������� ��������� ����� ���: a * x^2 + b * x + c = 0 , ��� a, b, c - �����\n\n");

    GetData(&a, &b, &c);

	int status_of_programm = SolveSquareEquation(a, b, c, &root1, &root2);

	switch (status_of_programm)
	{
        case NO_ROOT: printf("\n������ ��������� �� ����� �������");
            break;
        case ONE_ROOT: printf("\n������ ��������� ����� ���� �������: x1=x2= %lg", root1);
            break;
        case TWO_ROOT: printf("\n������ ��������� ����� ��� �������: x1= %lg\n\t\t\t\t\t\b\b\b\bx2= %lg", root1, root2);
            break;
        case INF_ROOT: printf("\n������ ��������� ����� ���������� ������� ���������� �������");
            break;
        case BAD_ENTERED_DATA: printf("������ � ��������� ������!!!");
            break;
        case BAD_ROOT_ADDR: printf("������ � ������� ����� (��� ������)!!!");
            break;
        default: printf("�����, ���-�� ����� �� ��� :(");
            break;
	}

	return 0;
}
