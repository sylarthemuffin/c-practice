/*      Zachary Kauffman
        ztk@iastate.edu 
        CPRE 185 Section E  
		Programming Practice 4
         <Reflection 1 What were you trying to learn or achieve?>
                I was trying to use 2D arrays in order to print out a times table that
				extends to a user-specified width/height. I was trying to learn more about
				passing arrays and multi-dimensional arrays into functions, since I wasn't
				very comfortable with the syntax of passing arrays as parameters yet.
        <Reflection 2 Were you successful? Why or Why not?>
				I was successful in achieving my  goal since my finished project achieves all 
				that I set out to accomplish. It lets the user decide on  a size of their times table
				and then prints out the specified table, with '|' and '-' characters giving the printed
				numbers a more defined cell-based appearance than all the numbers just being pritned out 
				with spaces in between.
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
				If I did this program over again, I would try to find some way to make the first row and first column
				numbers bigger, emboldened, or another color to help them stand out more. However, as I researched how 
				I could achieve this, it was over my head and something I could easily accomplish within the time frame.
				I also wish that I could get the table to consistently print the same way. For reasons I do not understand,
				sometimes the upper limit on how many terms can be printed without shifting lines into one another is lower than
				other times. For example, most of the time a 45 x 45 table fits fine, but other times 30 x 30 tables are already 
				being cut off and running onto the next line.
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
				The most important thing I learned while writing this code was how to pass multi-dimensional arrays as parameters,
				while still leaving the size up to the user to decide. At first I didn't know how to pass a multi-dimensional arrray at
				all, but then as I reserached it, I was still unsure of how to pass a variable into the second brackets. I then figured 
				out that all I needed to do was switch the order I passed the array size and the array itself in. By passing size first,
				I could use the variable name for size to specify the table size in the prototype. This was significant because it really 
				helped me grow more confident in an area that I was otherwise not knowledgeable about.
		<Other questions/comments for Instructors>
				Time spent: 35 minutes
*/

#include <stdio.h>
void timesTable();
void fillTable(int x, int table[][x]);
void printTable(int x, int table[][x]);

int main(void){
	timesTable();
	
	return 0;
}

void timesTable(){
	int x;
	printf("How large do you want your table? (1 through 45) : ");
	scanf("%d", &x);
	while(x < 1 || x > 45){
		//45 results in a table that is too large for the screen.
		printf("Please enter a valid number: ");
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