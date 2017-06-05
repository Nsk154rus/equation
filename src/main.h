#ifndef MAIN_H
#define MAIN_H

typedef struct{
	int solution_case; 
	float x1;
	float x2; 
} solution;


float calc_discr (float a,float b,float c);
void solve_equation(solution *sol, float a,float b,float c);

void print_solution (solution *sol);

#endif