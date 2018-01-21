/*
	@author ztk  
	contact: ztk@iastate.edu
*/


#include <stdio.h>
#define PI 3.14159265

double circle_area();
double circumference();
char scan();


int main(void){
	enum userInput {AREA, CIRCUMFERENCE};
	enum userInput input;
	char in;
	
	while(in != 'c' && in != 'a'){
		in = scan();
	}

	if(in == 'c'){
		input = CIRCUMFERENCE;
	}
	else if(in == 'a'){
		input == AREA;
	}
	else {
		printf("Please enter your input again.\n");
		in = scan();
		
	}
	
	if(input == AREA){
		printf("The area of your circle is: %.4lf ", circle_area());	
	}
	else if(input == CIRCUMFERENCE){
		printf("The circumference of your circle is: %.4lf ", circumference());
	}
	

	return 0;
}

double circle_area(){
	double radius;
	printf("Enter the radius of your circle: ");
	scanf("%lf", &radius);
	double area = radius * radius * PI;
	return area;
}	

double circumference(){
	double radius;
	printf("Enter the radius of your circle: ");
	scanf("%lf", &radius);
	double circumference = 2 * radius * PI;
	return circumference;
}
char scan(){
	char a; 
	printf("Type your input: a for area, c for circumference: ");
	scanf(" %c", &a);
	return a;
}