#include <ctest.h>
#include <functions.h>
#include <stdio.h>
CTEST(equation_suite, calc_0)
{
	solution my_solution, exp_solution;
	exp_solution.solution_case=0;

	float a=0;
	float b=0;
	float c=0;
	solve_equation(&my_solution,a,b,c);
	ASSERT_TRUE((exp_solution.solution_case==my_solution.solution_case));
}

CTEST(equation_suite, calc_1)
{
	solution my_solution, exp_solution;
	exp_solution.solution_case=1;
	float a=0;
	float b=0;
	float c=5;
	solve_equation(&my_solution,a,b,c);
	ASSERT_TRUE((exp_solution.solution_case==my_solution.solution_case));
}

CTEST(equation_suite, calc_2)
{
	solution my_solution, exp_solution;
	exp_solution.solution_case=2;
	exp_solution.x1=0.5;
	float a=4;
	float b=-4;
	float c=1;
	solve_equation(&my_solution,a,b,c);
	printf("%f %f %d %d \n",exp_solution.x1,my_solution.x1,exp_solution.solution_case,my_solution.solution_case);
	ASSERT_TRUE((exp_solution.x1==my_solution.x1 && exp_solution.solution_case==my_solution.solution_case));
}

CTEST(equation_suite, calc_3)
{
	solution my_solution, exp_solution;
	exp_solution.solution_case=3;
	exp_solution.x1=6;
	exp_solution.x2=-8;
	float a=1;
	float b=2;
	float c=-48;
	solve_equation(&my_solution,a,b,c);
	ASSERT_TRUE((exp_solution.x1==my_solution.x1 && exp_solution.x2==my_solution.x2 && exp_solution.solution_case==my_solution.solution_case));
}
