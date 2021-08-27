#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void CheckData(double *a);
void GetData(double *a, double *b, double *c);

bool IsZero(double val);
bool IsSuccess(int status_of_programm);

int SolveSquareEquation(double a, double b, double c, double *root1, double *root2);
int SolveLineEquation(double b, double c, double *root);
int CompareDoubles(double val1, double val2);
int UnitTestOfSolveEquation(int num_of_test, int status_of_programm_ref, double a, double b, double c,
                            double root1_ref, double root2_ref);
int RunUnitTest();
char* StatusToString(int status_of_programm);

#endif // FUNCTIONS_H_INCLUDED
