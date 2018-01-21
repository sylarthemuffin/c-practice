
#include <stdio.h>
#include <math.h>
/*
	@author ztk
	ztk@iastate.edu

*/


void sequence(double array[], int size, long start);

int main(void){
	int userSize = 2;
	double startingValue = 0;
	int i;
	char sign;
	printf("How many terms of the sequence do you want printed?: ");
	scanf("%d", &userSize);
	printf("What is the first value in your sequence?: ");
	scanf("%lf", &startingValue);
	double userValues[userSize];
	sequence(userValues, userSize, startingValue);
	for(i = 0; i < userSize; i++){
		//stops the program if the array elements become too large. This ensures that every number printed is accurate.
		if(userValues[i] > 1000000000 ){
			printf("Program in danger of overflow. Terminating.");
			return 0;
		}
		else{
			printf("%10.3lf\n", userValues[i]);
		}
	}
	return 0;
}


void sequence(double array[], int size, long start){
	char sign;
	int growthFactor;
	int i;
	array[0] = start;
	double sum = array[0];
	printf("How does your sequence change? x2 = x1");
	scanf(" %c %d", &sign, &growthFactor);
	while(sign != '+' && sign != '-' && sign != '*' && sign != '/' && sign != '^'){
		printf("%c Operator not recognized. Please try again: ", sign);
		scanf(" %c %d", &sign, &growthFactor);
	}
	for(i = 1; i < size; i++){
		switch(sign){	
			case '+':
				array[i] = sum + growthFactor;
				break;
			case '-':
				array[i] = sum - growthFactor;	
				break;
			case '*':
				array[i] = sum * growthFactor;
				break;
			case '/': 
				array[i] = sum / growthFactor;
				break;
		
		}
		sum = array[i];
	}
	
}
