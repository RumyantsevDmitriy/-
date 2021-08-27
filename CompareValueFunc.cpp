#include <stdio.h>
#include <assert.h>
#include <cctype>
#include <TXLib.h>

#include "myfunctions.h"
#include "myconstants.h"

enum CompareResult
{
    LESS  = -1,
    EQUAL =  0,
    MORE  =  1
};

CompareResult CompareDoubles(double val1, double val2)
{
   if (fabs(val1 - val2) <= PRECISION)
   {
        return EQUAL;
   }
   else if (val1 - val2 < 0)
   {
        return LESS;
   }
   else
   {
        return MORE;
   }
}

bool IsZero(double val)
{
    return (fabs(val) <= PRECISION);
}
