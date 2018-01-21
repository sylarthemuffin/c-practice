#include <stdio.h>
void timesTable();
void fillTable(int x, int table[][x]);
void printTable(int x, int table[][x]);

void timesTable(){
	int x;
	printf("How large do you want your table? (1 through 45) : ");
	scanf("%d", &x);
	while(x < 1 || x > 45){
		//45 results in a table that is too large for the screen.
		printf("Please enter a valid number. ");
		scanf("%d", &x);
	}
	int table[x][x];
	fillTable(x, table);
	printTable(x, table);
}
void fillTable(int x, int table[][x]){
	int i, j;
	for(i = 0; i < x; i++){
		for(j = 0; j < x; j++){
			table[i][j] = (i + 1) * (j + 1);
		}
	}
}
void printTable(int x, int table[][x]){
	int i, j;
	for(i = 0; i < x; i++){
		for(j = 0; j < x; j++){
			printf("%4d |", table[i][j]);
		}
		printf("\n");	
		for(j = 0; j < x; j++){
			printf("------");
		}
		printf("\n");
	}
}