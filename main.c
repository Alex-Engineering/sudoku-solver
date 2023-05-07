#include <stdio.h>

typedef sudoku char[][];

void sudoku_print(char sudoku[9][9]);

/* this takes less time than modulo opperation */
char sudoku[9][9];

void solver() { // testet ob geht oder nicht geht
	/* 4 doppel prüfungen */
	for i=0:8
	if==number break
	for j=0:8
	if==number break
	for i=0:2
	for j=0:3
	if==number break
}

int main() {
	return 0;
}

void sudoku_print(char sudoku[9][9]) {
	printf("#####################################\n");
	printf("# 1 | 2 | 3 #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#####################################\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#####################################\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#   |   |   #   |   |   #   |   |   #\n");
	printf("#####################################\n");
}
