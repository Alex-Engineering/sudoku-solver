#include <stdio.h>

typedef char sudoku_t[9][9];

/*sudoku_t gsudoku = {
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
};*/

sudoku_t gsudoku = {
	{0,0,0,0,6,0,0,2,7},
	{0,0,0,0,0,0,0,0,5},
	{0,0,4,0,9,1,0,8,0},
	{0,0,8,0,0,0,0,0,4},
	{0,0,0,4,3,0,0,0,0},
	{0,7,0,0,8,0,0,3,0},
	{3,0,0,0,0,9,0,0,1},
	{7,2,0,1,0,0,0,0,0},
	{0,9,0,0,0,0,2,0,0},
};


void sudoku_print(sudoku_t sudoku);

char tester(sudoku_t sudoku, char m, char n, char number) {
	char i, j;
	/* rowcheck */
	for(j=0; j<9; j++) {
		if(sudoku[m][j]==number) {
			return 0;
		}
	}
	/* coulcheck */
	for(i=0; i<9; i++) {
		if(sudoku[i][n]==number) {
			return 0;
		}
	}
	/* blockcheck */
	m = (m/3)*3;
	n = (n/3)*3;
	for(i=m; i<(m+3); i++) {
		for(j=n; j<(n+3); j++) {
			if(sudoku[i][j]==number) {
				return 0;
			}
		}
	}
	return 1;
}

void solver(sudoku_t sudoku) {
	char i, j, k;
	for(i=0; i<9; i++) {
		for(j=0; j<9; j++) {
			if(sudoku[i][j]==0) {
				for(k=1; k<=9; k++) {
					if(tester(sudoku, i, j, k)) {
						sudoku[i][j] = k;
						solver(sudoku);
					}
				}
				/* cant put any number */
				sudoku[i][j] = 0;
				return;
			}
		}
	}
	/* solver has finished */
	sudoku_print(sudoku);
	return; /* other possible solutions */
}

int main() {
	sudoku_print(gsudoku);
	solver(gsudoku);
	return 0;
}

void sudoku_print(sudoku_t sudoku) {
	char i, j;
	for(i=0; i<9; i++) {
		for(j=0; j<9; j++) {
			printf("%1i ", sudoku[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}
