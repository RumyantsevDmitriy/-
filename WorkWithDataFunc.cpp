#include <stdio.h>
#include <assert.h>
#include <cctype>
#include <TXLib.h>

#include "Functions.h"
#include "Constants.h"

void GetData(double *a, double *b, double *c)
{
    printf("������� �������� ��������� a: ");
	CheckData(a);

	printf("������� �������� ��������� b: ");
	CheckData(b);

	printf("������� �������� ��������� c: ");
	CheckData(c);
}

void CheckData(double *value)
{
    assert(value != NULL);

	int data = scanf("%lg", value);

	assert(isfinite(*value));
    assert(isspace(getchar()));
}


