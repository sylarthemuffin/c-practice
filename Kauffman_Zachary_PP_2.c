/*

	@author ztk
	ztk@iastate.edu

*/

#include <stdio.h>
#include <math.h>
#include <strings.h>


int findGCF();
int findLCM();
void primeFactorization();

int main(){
	char answer[50];
	while(strcasecmp(answer,"GCF") != 0 && strcasecmp(answer,"LCM") != 0 && strcasecmp(answer,"primeFactorization") != 0){
		printf("Enter an input (GCF, LCM, or primeFactorization): ");
		scanf(" %s", answer);		
	}	
	if(strcasecmp(answer,"GCF") == 0){
		printf("%d",findGCF());
	}
	if(strcasecmp(answer,"LCM") == 0){
		printf("%d",findLCM());
	}
	if(strcasecmp(answer,"primeFactorization") == 0){
		primeFactorization();
	}
	return 0;
}

int findGCF(){
	int max, i, gcf, x, y;
	printf("Enter the first number: ");
	scanf(" %d", &x);
	printf("Enter the second number: ");
	scanf(" %d", &y);
	max = x > y ? x : y;
	for(i = 1; i <= max; i++){
		if(x % i == 0 && y % i == 0){
			gcf = i;
		}
	}
	return gcf;
}

int findLCM(){
	int i, x, y, lcm;
	printf("Enter the first number: ");
	scanf(" %d", &x);
	printf("Enter the second number: ");
	scanf(" %d", &y);
	for(i = 1; i==i; i++){
		if( i % x == 0 && i % y == 0){
			lcm = i;
			break;
		}
	}
	return lcm; 
}

void primeFactorization(){
	int i, j;
	printf("Enter the number to factor: ");
	scanf(" %d", &j);
	for(i = 2; i <= j; ++i){
		while(j % i == 0){
			printf("%d\n", i);
			j = j / i;
		}
	}
	
}