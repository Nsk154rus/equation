#include <math.h>
#include "functions.h"
#include <stdio.h>

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
		float d;
		d = calc_discr(a,b,c);
		if(d < 0) {
			sol->solution_case=1;
        	} else {
			if(d == 0) {
 				sol->solution_case=2;
				sol->x1=-b/(2*a);
			} else {
				sol->solution_case=3;
				sol->x1=(-b+sqrt(d))/(2*a);
				sol->x2=(-b-sqrt(d))/(2*a);
            		}
        	}
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
		case 3:
			printf("X1 = %f, X2 = %f \n",sol->x1,sol->x2);
			break;
		default:
			break;
	}	
}
