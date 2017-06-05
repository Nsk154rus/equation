#include <ctest.h>
#include <functions.h>

CTEST(discr_suite, calc_positive)
{
	float a=2;
	float b=5;
	float c=3;	
	float result = calc_discr(a,b,c);
	float expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(discr_suite, calc_negative)
{
    const int result = calc_discr(3,4,5);
    const int expected = -44;
    ASSERT_EQUAL(expected, result);
}