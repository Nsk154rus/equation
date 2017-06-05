main:
	gcc -Wall -o bin/main src/functions.c src/main.c -lm
testing:
	gcc -I ctest -I src -o bin/test src/functions.c  test/main.c test/solve_equation_test.c test/discr_test.c -lm