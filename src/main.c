#include <stdio.h>
#include <math.h>
#include "functions.h"

int main()
{
	float a,b,c;
	printf("Введите A, B, C \n");
	scanf("%f %f %f", &a, &b, &c);
	solution my_solution;
	my_solution.solution_case=-1;
	solve_equation(&my_solution, a,b,c);
	print_solution(&my_solution);
	return 0;
}