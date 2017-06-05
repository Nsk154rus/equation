#include <stdio.h>
#include <math.h>
#include "main.h"

float calc_discr (float a,float b,float c) {
	float d = b * b - 4 * a * c;
	return d;
}
void solve_equation(solution *sol, float a,float b,float c) {
	if (a==0) {
		if (b==0) {
			if (c==0) {
				sol->solution_case=0;
			} else {
				sol->solution_case=1;
			}
		} else {
			sol->solution_case=2;
			sol->x1=-c/b;
		}
	} else {
		float d, x1, x2;
		d = calc_discr(a,b,c);
    	}	
} 

void print_solution (solution *sol) {
	switch (sol->solution_case) {
		case 0:
			printf("X - любое число \n");
			break;
		case 1:
			printf("Корней нет \n");
			break;
		case 2:
			printf("X = %f \n",sol->x1);
			break;
		default:
			break;
	}	
}

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