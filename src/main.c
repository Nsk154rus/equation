#include <stdio.h>
#include <math.h>
#include "main.h"

void solve_equation(solution *sol, float a,float b,float c) {
	sol->solution_case=0;
	sol->x1=0;
	sol->x2=0;	
} 

void print_solution (solution *sol) {
	printf("Случай: %d X1: %f  X2: %f \n",sol->solution_case,sol->x1,sol->x2);
}

int main()
{
	float a,b,c;
	printf("Введите A, B, C \n");
	scanf("%f %f %f", &a, &b, &c);
	solution my_solution;
	solve_equation(&my_solution, a,b,c);
	print_solution(&my_solution);
	return 0;
}